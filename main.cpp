#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(int argc, char** argv) {
	VideoCapture cap = VideoCapture("./video.mp4");

	while (cap.read(frame)) {
        imshow("", frame);
		if (waitKey(1) >= 0) break;
	}
    
	return 0;
}