#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <stdio.h>

int main() {

  /* IMAGE TEST

  // cv::Mat img =
  //     cv::imread("C:\\Users\\debea\\Documents\\IMAC\\IMAC_2\\STAGE\\OpenCV_"
  //                "test\\test_Open_CV\\img\\LogoGame.png");
  // cv::imshow("IMAGE", img);
  // cv::waitKey(0);

  */

  cv::Mat image;
  cv::namedWindow("webcam");

  cv::VideoCapture cap(0);

  if (!cap.isOpened()) {
    std::cout << "cannot open camera";
  }

  while (true) {
    cap >> image;
    cv::imshow("Display window", image);
    cv::waitKey(25);
  }
  return 0;
}