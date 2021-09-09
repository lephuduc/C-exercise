#include <iostream>
using namespace std;

int main() {
	double km,tien;
	cout << " Nhap so km cua xe taxi:";
	cin >> km;


	if (km <= 1)
		tien = km * 15000;
	else
		if (km <= 5)
			tien = (km - 1) * 13500 + 15000;
		else
			tien = 15000 + 13500 + (km - 5) * 11000;
			if (km > 120)
			tien = tien * 0.9;
	cout << "Tong tien cua ban la:" << tien << endl;

}
