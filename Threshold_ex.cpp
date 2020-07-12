#include <iostream>
#include "cv.hpp"

using namespace std;
using namespace cv;

// int main() {
//     Mat image = imread("images/coin_A2.jpg");
//     resize(image, image, Size(0, 0), 0.2, 0.2);
//     cvtColor(image, image, CV_BGR2YCrCb);
//     inRange(image, Scalar(0, 133, 77), Scalar(255, 173, 127), image);
//     imshow("inRange", image); 
//     waitKey(0);
//     return 0;
// }

int main() {
    Mat image = imread("images/Fig06_lenna.tif");
    cvtColor(image, image, CV_BGR2GRAY);
    Mat dst;
    adaptiveThreshold(image, dst, 255, ADAPTIVE_THRESH_MEAN_C, THRESH_BINARY, 7, 10);
    imshow("dst", dst);
    imshow("image", image);
    waitKey(0);
    return 0;
}
