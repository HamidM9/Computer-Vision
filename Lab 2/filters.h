//
// Created by hamidm9 on 5/24/23.
//

#ifndef LAB_2_FILTERS_H
#define LAB_2_FILTERS_H
int max_filter(cv::Mat& image, int kernelSize);
int min_filter(cv::Mat& image, int kernelSize);
int medianFilter(cv::Mat& image, int kernelSize);
int gaussianSmoothing(cv::Mat& image, int kernelSize, double sigma);
#endif //LAB_2_FILTERS_H
