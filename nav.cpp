#include<opencv2/opencv.hpp>
#include<iostream>
#include<vector>
using namespace cv;
using namespace std;

int main()
{
    Mat src = imread("../picture/default.jpeg");
    if(src.empty())
    {
        printf("Failed to read image!\n");
        return -1;
    }
    imshow("Original Map", src);
    Mat gray;
    cvtColor(src, gray, COLOR_BGR2GRAY);

    GaussianBlur(gray, gray, Size(3,3), 1);

    Mat binary;
    threshold(gray, binary, 127, 255, THRESH_BINARY);
    imshow("Binary Map", binary);

    Mat labelImage, stats, centroids;
    int labelCount = connectedComponentsWithStats(binary, labelImage, stats, centroids, 8, CV_32S);

    Mat result = src.clone();
    cout << "Total connected regions: " << labelCount -1 << endl;
    for(int i = 1; i < labelCount; i++)
    {
        int area = stats.at<int>(i, CC_STAT_AREA);
        cout << "Region " << i << " pixel count: " << area << endl;
    }

    imwrite("../nav_result.jpg", result);
    waitKey(0);
    destroyAllWindows();
    return 0;
}
