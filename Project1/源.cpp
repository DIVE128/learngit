#include <opencv2\opencv.hpp>
using namespace cv;
using namespace std;

int main()
{
	//��ȡ��Ƶ������ͷ
	VideoCapture capture(0);

	while (true)
	{
		Mat frame;
		capture >> frame;
		imshow("��ȡ��Ƶ", frame);
		waitKey(30);	//��ʱ30
	}
	return 0;
}