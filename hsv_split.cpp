#include<opencv2/opencv.hpp>
using namespace cv;
int main()
{
    Mat src = imread("test.jpg");
    Mat hsv;
    cvtColor(src,hsv,COLOR_BGR2HSV);
    vector<Mat> channels;
    split(hsv,channels);
    imshow("H channel",channels[0]);
    imshow("S channel",channels[1]);
    imshow("V channel",channels[2]);
    waitKey(0);
    return 0;
}
