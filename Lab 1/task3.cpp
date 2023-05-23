//
// Created by hamidm9 on 5/22/23.
//
#include <iostream>
#include <opencv2/highgui.hpp>
#include "task3.h"

int main2(const std::string& imagePath) {
    std::cout << "Image Path: " << imagePath << std::endl;
    cv::Mat image2 = cv::imread(imagePath);

    // Set first channel to 0
    cv::Mat modifiedImage = image2.clone();
    cv::MatIterator_<cv::Vec3b> it1, end1;
    for (it1 = modifiedImage.begin<cv::Vec3b>(), end1 = modifiedImage.end<cv::Vec3b>(); it1 != end1; ++it1) {
        (*it1)[0] = 0;  // Set the first channel to zero
    }
    // Set second channel to 0
    cv::Mat modifiedImage1 = image2.clone();
    cv::MatIterator_<cv::Vec3b> it2, end2;
    for (it2 = modifiedImage1.begin<cv::Vec3b>(), end2 = modifiedImage1.end<cv::Vec3b>(); it2 != end2; ++it2) {
        (*it2)[1] = 0;  // Set the second channel to zero
    }
    // Set third channel to 0
    cv::Mat modifiedImage2 = image2.clone();
    cv::MatIterator_<cv::Vec3b> it3, end3;
    for (it3 = modifiedImage2.begin<cv::Vec3b>(), end3 = modifiedImage2.end<cv::Vec3b>(); it3 != end3; ++it3) {
        (*it2)[1] = 0;  // Set the second channel to zero
    }
    // Display the image
    cv::imshow("first  channel is zero", modifiedImage);
    cv::waitKey(0);
    cv::imshow("second  channel is zero", modifiedImage1);
    cv::waitKey(0);
    cv::imshow("thired  channel is zero", modifiedImage2);
    cv::waitKey(0);













    return 0;






}
