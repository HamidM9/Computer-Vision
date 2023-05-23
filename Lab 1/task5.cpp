//
// Created by hamidm9 on 5/23/23.
//

#include <iostream>
#include <opencv2/highgui.hpp>
#include "task5.h"

int main4() {


// Create the first image with a vertical gradient
    cv::Mat verticalGradientImage(256, 256, CV_8UC1);
    for (int row = 0; row < verticalGradientImage.rows; ++row) {
        for (int col = 0; col < verticalGradientImage.cols; ++col) {
            verticalGradientImage.at<uchar>(row, col) = static_cast<uchar>(row);
        }
    }
    cv::imshow("Vertical Gradient Image", verticalGradientImage);
    cv::waitKey(0);

    // Create the second image with a horizontal gradient
    cv::Mat horizontalGradientImage(256, 256, CV_8UC1);
    for (int row = 0; row < horizontalGradientImage.rows; ++row) {
        for (int col = 0; col < horizontalGradientImage.cols; ++col) {
            horizontalGradientImage.at<uchar>(row, col) = static_cast<uchar>(col);
        }
    }
    cv::imshow("Horizontal Gradient Image", horizontalGradientImage);
    cv::waitKey(0);

    // Create the third image with a chessboard of squares of size 20 pixels
    cv::Mat chessboard20(300, 300, CV_8UC1);
    for (int row = 0; row < chessboard20.rows; ++row) {
        for (int col = 0; col < chessboard20.cols; ++col) {
            int squareSize = 20;
            int rowSquare = row / squareSize;
            int colSquare = col / squareSize;
            chessboard20.at<uchar>(row, col) = (rowSquare + colSquare) % 2 ? 255 : 0;
        }
    }
    cv::imshow("Chessboard (20 pixels)", chessboard20);
    cv::waitKey(0);

    // Create the fourth image with a chessboard of squares of size 50 pixels
    cv::Mat chessboard50(300, 300, CV_8UC1);
    for (int row = 0; row < chessboard50.rows; ++row) {
        for (int col = 0; col < chessboard50.cols; ++col) {
            int squareSize = 50;
            int rowSquare = row / squareSize;
            int colSquare = col / squareSize;
            chessboard50.at<uchar>(row, col) = (rowSquare + colSquare) % 2 ? 255 : 0;
        }
    }
    cv::imshow("Chessboard (50 pixels)", chessboard50);
    cv::waitKey(0);

    return 0;


}
