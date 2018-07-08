/*
Control Panel >> System >> System Settings >> Advanced
>> Environment Variables >> Path >> C:\opencv\build\x64\vc14\bin

Solution Platforms >> x64

[Project >> Properties >>]

Confuguration: All Configurations

Configuration Properties >> C/C++ >> General >>
Additional Include Directories >>
C:\opencv\build\include

Configuration Properties >> Linker >> General >>
Additional Library Directories >>
C:\opencv\build\x64\vc14\lib

Configuration Properties >> Linker >> Input >>
Additional Dependencies >>
opencv_world320d.lib
*/
#include <iostream>
#include <opencv2\opencv.hpp>
#include <string>

int main(int argc, char *argv[])
{
	std::string fileName;
	cv::Mat image;

	std::cout << "Enter file name: ";
	std::cin >> fileName;
	image = cv::imread(fileName, -1);
	if (image.empty()) {
		std::cout << "ERROR [int main(int,char *[])]: ";
		std::cout << "Unable to open file ";
		std::cout << fileName;
		std::cout << std::endl;
		return -1;
	}
	cv::namedWindow("Fruit Finder", cv::WINDOW_AUTOSIZE);
	cv::imshow("Fruit Finder", image);
	cv::waitKey(0);
	cv::destroyWindow("Fruit Finder");

	return 0;
}