#include <opencv2/opencv.hpp>
#include <iostream>

int main()
{
    cv::Mat img = cv::imread("C:/Users/34418/Desktop/EdgeDetectionProject/images/test.jpg");
    cv::imshow("original Image", img);
    cv::waitKey(0);

    cv::Mat img_gray;
    cv::cvtColor(img, img_gray, cv::COLOR_BGR2GRAY);
    cv::Mat img_blur;
    cv::GaussianBlur(img_gray, img_blur, cv::Size(3, 3), 0);

    // Sobel edge detection
    cv::Mat sobelx, sobely, sobelxy;
    cv::Sobel(img_blur, sobelx, CV_64F, 1, 0, 5);
    cv::Sobel(img_blur, sobely, CV_64F, 0, 1, 5);
    cv::Sobel(img_blur, sobelxy, CV_64F, 1, 1, 5);

    // Display Sobel edge detection images
    cv::imshow("Sobel X", sobelx);
    cv::waitKey(0);
    cv::imshow("Sobel Y", sobely);
    cv::waitKey(0);
    cv::imshow("Sobel XY using Sobel() function", sobelxy);
    cv::waitKey(0);

    // Display Canny edge detection images
    cv::Mat edges;
    cv::Canny(img_blur, edges, 100, 200, 3, false);
    cv::imshow("Canny edge detection", edges);
    cv::waitKey(0);

    cv::destroyAllWindows();
    return 0;
}
