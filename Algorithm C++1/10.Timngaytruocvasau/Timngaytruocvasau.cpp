#include <iostream>
using namespace std;

//Định nghĩa hàm

bool kiemtranamnhuan(int nYear)
{
	if ((nYear % 4 == 0 && nYear % 100 != 0) || (nYear % 400 == 0))
	{
		return true;
	}
	return false;
}
int songay(int Month,int Year)
{
	int numofday;	
		switch (Month)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			numofday = 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			numofday = 30;
			break;
		case 2:
			if (kiemtranamnhuan(Year))
				numofday = 29;
			else
				numofday = 28;
			break;
		}
	return numofday;
}
bool laNgayHopLe(int nDay, int nMonth, int nYear)
{
	// Kiểm tra năm
	if (nYear < 0)
	{
		return false; // Ngày không còn hợp lệ nữa!
	}

	// Kiểm tra tháng
	if (nMonth < 1 || nMonth > 12)
	{
		return false; // Ngày không còn hợp lệ nữa!
	}

	// Kiểm tra ngày
	if (nDay < 1 || nDay > songay(nMonth, nYear))
	{
		return false; // Ngày không còn hợp lệ nữa!
	}

	return true; // Trả về trạng thái cuối cùng...
}
void timngayhomtruoc(int &nDay, int &nMonth, int &nYear)
{
	nDay--;
	if (nDay== 0)
	{	
	nMonth--;
		if ( nMonth== 0)
		{
			nYear--;
			nMonth = 12;
		}
	nDay = songay(nMonth,nYear);
	}
}
void timngayhomsau(int& nDay, int& nMonth, int& nYear)
{
	nDay++;
	if (nDay> songay(nMonth, nYear))
	{
		if (nMonth + 1 >12)
		{
			nYear++;
			nMonth;
		}
		nDay = 1;
		nMonth++;
	}
}

//nhập và xuất dữ liệu
int main()
{
	int Day, Month, Year;
	cout << "Enter Day: ";
	cin >> Day;
	cout << "Enter Month: ";
	cin >> Month;
	cout << "Enter Year: ";
	cin >> Year;

	if (laNgayHopLe(Day, Month, Year))
	{
		int tmp1, tmp2, tmp3;
		tmp1 = Day;
		tmp2 = Month;
		tmp3 = Year;
		timngayhomtruoc(Day, Month, Year);
		cout << "Ngay hom truoc la: " << Day << "/" << Month << "/" << Year << endl;
		timngayhomsau(tmp1,tmp2, tmp3);
		cout << "Ngay hom sau la: " << tmp1 << "/" << tmp2 << "/" << tmp3 << endl;
	}
	else
		cout << "Ngay khong hop le! " << endl;
	return 0;

}
