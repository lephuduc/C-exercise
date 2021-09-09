#include <iostream>
using namespace std;

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

int main() 
{
    int Day,Month,Year;
    cout<<"Enter day: ";
    cin>>Day;
    cout<<"Enter month: ";
    cin>>Month;
    cout<<"Enter year: ";
    cin>>Year;

    if (laNgayHopLe(Day,Month,Year))
    {
        int sumday = 0;
        for (int i =Month-1;i>0;i--)
            {
                sumday+=songay(i,Year);
            }
    cout<<"Day number: "<< sumday+Day <<endl;
    }
    else
    {
        cout<<"Ngay khong hop le"<<endl;
    }

    return 0;
}