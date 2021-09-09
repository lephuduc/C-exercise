#include <iostream>
using namespace std;

int main()
{

	int nsta,number, Lnum;
	int Inumber = 0;
	cout << "Nhap so can kiem tra: ";
	cin >> nsta;
	number = nsta;
	while (number % 10 != 0)
{
		//lấy số cuối 
	Lnum = number % 10;
	//tìm ra số đối
	Inumber = (Inumber * 10) + Lnum;
	//chia lấy nguyên để xóa đi số cuối
	number = number / 10;
}
	if (Inumber == nsta)
	{
		cout << "Ok so doi" << endl;
	}
	else
	{
		cout << "Khong phai so doi";
	}
return 0;
}