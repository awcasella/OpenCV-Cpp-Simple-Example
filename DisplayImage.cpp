#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

//using namespace cv;

int main(int argc, char const *argv[])
{
    if ( argc != 2 )
    {
        std::cout << "usage: DisplayImage.out <Image_Path>" << std::endl;
        return -1;
    }
    cv::Mat image;
    image = cv::imread( argv[1], 1 );
    if ( !image.data )
    {
        std::cout << "No image data" << std::endl;
        return -1;
    }
	std::cout << "image.rows: " << image.rows << ", image.cols: " << image.cols << std::endl;
    cv::namedWindow("Display Image", cv::WINDOW_AUTOSIZE );
    cv::imshow("Display Image", image);
    cv::waitKey(0);
	return 0;
}
