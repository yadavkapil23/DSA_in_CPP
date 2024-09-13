#include <opencv2/opencv.hpp>  // Include the OpenCV header
#include <iostream>

using namespace cv;  // OpenCV namespace
using namespace std;

int main()
{
    // Load an image from file
    Mat image = imread("example.jpg", IMREAD_COLOR);

    // Check if the image was loaded successfully
    if (image.empty())
    {
        cout << "Could not open or find the image" << endl;
        return -1;
    }

    // Save the image to a new file
    bool isSaved = imwrite("output_image.png", image);

    // Check if the image was saved successfully
    if (isSaved)
    {
        cout << "Image saved successfully!" << endl;
    }
    else
    {
        cout << "Failed to save the image!" << endl;
    }

    return 0;
}
