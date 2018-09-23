#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(int argc, char** argv) {
	cout << "Demo Started" << endl;

	// Create the capture mechanism for reading a video and the matrix for each frame
	// The path to the video must correspond to the path of the executable in ~/M8_ComputerVisionDemo/bin
	VideoCapture capture("../video.mp4");
	Mat frame;

	// Handle when the capture mechanism is not correctly initialized
	if (!capture.isOpened()) {
		cout << "Error opening video stream or file" << endl;
		return -1;
	}

	// While there is another frame to read
	while (capture.read(frame)) {
		// Display the frame
	        imshow("Computer Vision Demo", frame);
		
		// Press any key to exit the demo
		if (waitKey(25) > 0) {
			break;
		}
	}

	cout << "Demo Complete" << endl;    
	return 0;
}
