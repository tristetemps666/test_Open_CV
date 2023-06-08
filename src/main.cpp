#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <stdio.h>

int main() {

  cv::Mat img =
      cv::imread("C:\\Users\\debea\\Documents\\IMAC\\IMAC_2\\STAGE\\OpenCV_"
                 "test\\test_Open_CV\\img\\LogoGame.png");
  cv::imshow("IMAGE", img);
  cv::waitKey(0);
  return 0;
}