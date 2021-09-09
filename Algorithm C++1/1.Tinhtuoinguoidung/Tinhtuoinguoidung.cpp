#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int yearborn;
	cout << "Enter your year born: ";
	cin >> yearborn;

	//lấy năm thực từ hệ thống
#if 1
	// Khai báo biến Time để lấy giá trị thời gian thực từ máy tính
	time_t Time = time(0);
	// Khởi tạo con trỏ Now lấy giá trị thời gian từ Time
	tm* Now = localtime(&Time);
	// Lấy năm hiện tại từ hệ thống máy tính gán cho biến nCurYear
	int realyear = Now->tm_year + 1900;
#endif

	cout << "Your age is: " << realyear - yearborn << endl;
	return 0;
}