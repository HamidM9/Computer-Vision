//
// Created by hamidm9 on 5/24/23.
//
#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/opencv.hpp>
#include "filters.h"
int max_filter(cv::Mat& image, int kernelSize){

    if (kernelSize % 2 == 0) {
        std::cout << "Error: Kernel size must be an odd number." << std::endl;
        return -1;
    }
    int radius = kernelSize / 2;
    cv::Mat tempImage;
    image.copyTo(tempImage);


    for (int row = radius; row < image.rows - radius; ++row) {
        for (int col = radius; col < image.cols - radius; ++col) {
            uchar maxValue = 0;

            for (int i = -radius; i <= radius; ++i) {
                for (int j = -radius; j <= radius; ++j) {
                    uchar pixelValue = tempImage.at<uchar>(row + i, col + j);
                    maxValue = std::max(maxValue, pixelValue);
                }
            }

            image.at<uchar>(row, col) = maxValue;
        }
    }



    std::string windowName = "Max Filter (Kernel Size: " + std::to_string(kernelSize) + ")";
    cv::imshow(windowName, image);
    cv::waitKey(0);

}

int min_filter(cv::Mat& image, int kernelSize) {
    if (kernelSize % 2 == 0) {
        std::cout << "Error: Kernel size must be an odd number." << std::endl;
        return -1;
    }

    int radius = kernelSize / 2;
    cv::Mat tempImage;
    image.copyTo(tempImage);

    for (int row = radius; row < image.rows - radius; ++row) {
        for (int col = radius; col < image.cols - radius; ++col) {
            uchar minValue = 255;

            for (int i = -radius; i <= radius; ++i) {
                for (int j = -radius; j <= radius; ++j) {
                    uchar pixelValue = tempImage.at<uchar>(row + i, col + j);
                    minValue = std::min(minValue, pixelValue);
                }
            }

            image.at<uchar>(row, col) = minValue;
        }
    }
    std::string windowName = "Min Filter (Kernel Size: " + std::to_string(kernelSize) + ")";
    cv::imshow(windowName, image);
    cv::waitKey(0);
}

int medianFilter(cv::Mat& image, int kernelSize) {
    if (kernelSize % 2 == 0) {
        std::cout << "Error: Kernel size must be an odd number." << std::endl;
        return -1;
    }

    cv::Mat tempImage;
    cv::medianBlur(image, tempImage, kernelSize);

    // Display the image with the kernel size in the window name
    std::string windowName = "Median Filter (Kernel Size: " + std::to_string(kernelSize) + ")";
    cv::imshow(windowName, tempImage);
    cv::waitKey(0);
}

int gaussianSmoothing(cv::Mat& image, int kernelSize, double sigma) {
    if (kernelSize % 2 == 0) {
        std::cout << "Error: Kernel size must be an odd number." << std::endl;
        return -1;
    }

    cv::Mat tempImage;
    cv::GaussianBlur(image, tempImage, cv::Size(kernelSize, kernelSize), sigma);

    // Display the image with the kernel size in the window name
    std::string windowName = "Gaussian Smoothing (Kernel Size: " + std::to_string(kernelSize) + ")";
    cv::imshow(windowName, tempImage);
    cv::waitKey(0);
}