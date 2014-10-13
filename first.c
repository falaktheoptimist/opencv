/* first.c :Code to display an image using OpenCV */
#include "opencv2/highgui/highgui.hpp"
int main(int argc, char** argv){
 
// load the image
  IplImage* img = cvLoadImage(argv[1],-1);
// create a window to display the image
  cvNamedWindow(argv[1],CV_WINDOW_AUTOSIZE);
// display the image
  cvShowImage(argv[1],img);
// wait for keystroke
  cvWaitKey(0);
// release the image object
  cvReleaseImage(&img);
// destroy the window
  cvDestroyWindow(argv[1]);
}