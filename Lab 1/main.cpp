#include <iostream>
#include <opencv2/highgui.hpp>
#include "task3.h"
#include "task4.h"
#include "task5.h"


int main(int argc, char** argv) {

    char key = cv::waitKey(0);
    if (argc < 2) {
        std::cout << "Please provide an image filename as a command-line ." << std::endl;
        return -1;
    }
    // Load the image
    //If you read a jpg file, a 3 channel image is created by default. If you need a grayscale image, use:
    //
    //      cv::Mat image = cv::imread(argv[1], cv::IMREAD_GRAYSCALE);
    cv::Mat image = cv::imread(argv[1]);

    // Check if the image was loaded successfully
    if (image.empty()) {
        std::cout << "Failed to load the image: " << argv[1] << std::endl;
        return -1;

    }

    // Display the image
    cv::imshow("Image", image);
    cv::waitKey(0);

    // Get the number of channels
    int numChannels = image.channels();
    std::cout<<"Number of channels: "<< numChannels<<std::endl;
    std::cout << "Key pressed: " << key << std::endl;
    main2("Lena_color.jpg");
    main3("Lena_color.jpg");
    main4();
    return 0;
}
