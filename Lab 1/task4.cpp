//
// Created by hamidm9 on 5/23/23.
//
#include <iostream>
#include <opencv2/highgui.hpp>
#include "task4.h"

int main3(const std::string& imagePath) {


    cv::Mat myimage = cv::imread(imagePath);


    if (myimage.channels() != 3) {
        std::cout << "Input image must have 3 channels." << std::endl;
        return 0;
    }

    std::vector<cv::Mat> channels;
    cv::split(myimage, channels);

    if (channels.size() != 3) {
        std::cout << "Failed to split image into channels." << std::endl;
        return 0;
    }

    cv::imshow("Blue Channel", channels[0]);
    cv::waitKey(0);

    cv::imshow("Green Channel", channels[1]);
    cv::waitKey(0);

    cv::imshow("Red Channel", channels[2]);
    cv::waitKey(0);

    cv::waitKey(0);











    return 0;






}
