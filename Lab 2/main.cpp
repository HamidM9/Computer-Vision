#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/opencv.hpp>
#include "filters.h"
#include "histogram.h"
int main(int argc, char** argv) {


    cv::Mat imageforhistogram = cv::imread(argv[1], cv::IMREAD_GRAYSCALE);


    plotHistogram(imageforhistogram);
    // Apply histogram equalization
    cv::Mat equalizedImage;
    cv::equalizeHist(imageforhistogram, equalizedImage);

    // Equalized image histogram
    std::cout << "Equalized Image Histogram" << std::endl;
    plotHistogram(equalizedImage);

    // Display original and equalized images
    cv::imshow("Original Image", imageforhistogram);
    cv::imshow("Equalized Image", equalizedImage);
    cv::waitKey(0);
    cv::Mat image = cv::imread(argv[1]);
    // Convert the image to grayscale
    cv::Mat grayscaleImage;
    cv::Mat grayscaleImage1;
    cv::Mat grayscaleImage2;
    cv::cvtColor(image, grayscaleImage, cv::COLOR_BGR2GRAY);
    cv::cvtColor(image, grayscaleImage1, cv::COLOR_BGR2GRAY);
    cv::cvtColor(image, grayscaleImage2, cv::COLOR_BGR2GRAY);
    // Save the grayscale image
    cv::imwrite("image_grayscale.jpg", grayscaleImage);
    cv::imwrite("image_grayscale1.jpg", grayscaleImage1);
    cv::imwrite("image_grayscale2.jpg", grayscaleImage2);
    cv::Mat grayscaleImage3;
    cv::cvtColor(image, grayscaleImage3, cv::COLOR_BGR2GRAY);
    cv::imwrite("image_grayscale3.jpg", grayscaleImage3);
    cv::Mat grayscaleImage4;
    cv::cvtColor(image, grayscaleImage4, cv::COLOR_BGR2GRAY);
    cv::imwrite("image_grayscale4.jpg", grayscaleImage4);
    cv::Mat grayscaleImage5;
    cv::cvtColor(image, grayscaleImage5, cv::COLOR_BGR2GRAY);
    cv::imwrite("image_grayscale5.jpg", grayscaleImage5);
    cv::Mat grayscaleImage6;
    cv::cvtColor(image, grayscaleImage6, cv::COLOR_BGR2GRAY);
    cv::imwrite("image_grayscale6.jpg", grayscaleImage6);
    cv::Mat grayscaleImage7;
    cv::cvtColor(image, grayscaleImage7, cv::COLOR_BGR2GRAY);
    cv::imwrite("image_grayscale7.jpg", grayscaleImage7);
    cv::Mat grayscaleImage8;
    cv::cvtColor(image, grayscaleImage8, cv::COLOR_BGR2GRAY);
    cv::imwrite("image_grayscale8.jpg", grayscaleImage8);
    max_filter(grayscaleImage,3);
    max_filter(grayscaleImage1,5);
    min_filter(grayscaleImage2,3);
    min_filter(grayscaleImage3,5);
    medianFilter(grayscaleImage4,5);
    medianFilter(grayscaleImage5,11);
    gaussianSmoothing(grayscaleImage6, 3, 1);
    gaussianSmoothing(grayscaleImage7, 5, 2);
    gaussianSmoothing(grayscaleImage8, 7, 3);


    return 0;
}








