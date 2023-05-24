//
// Created by hamidm9 on 5/24/23.
//
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
#include "histogram.h"

void plotHistogram(const cv::Mat& image) {
    // Compute histogram
    int histSize = 256;  // Number of bins
    float range[] = { 0, 256 };
    const float* histRange = { range };
    bool uniform = true;
    bool accumulate = false;
    cv::Mat histogram;
    cv::calcHist(&image, 1, 0, cv::Mat(), histogram, 1, &histSize, &histRange, uniform, accumulate);

    // Create histogram image
    int histWidth = 512;
    int histHeight = 400;
    int binWidth = cvRound(static_cast<double>(histWidth) / histSize);
    cv::Mat histImage(histHeight, histWidth, CV_8UC3, cv::Scalar(0, 0, 0));

    // Normalize histogram values
    cv::normalize(histogram, histogram, 0, histImage.rows, cv::NORM_MINMAX, -1, cv::Mat());

    // Draw histogram bars
    for (int i = 0; i < histSize; i++) {
        int binHeight = cvRound(histogram.at<float>(i));
        cv::rectangle(histImage, cv::Point(i * binWidth, histHeight), cv::Point((i + 1) * binWidth, histHeight - binHeight), cv::Scalar(255, 255, 255), -1);
    }

    // Display histogram
    cv::imshow("Histogram", histImage);
    cv::waitKey(0);
}


