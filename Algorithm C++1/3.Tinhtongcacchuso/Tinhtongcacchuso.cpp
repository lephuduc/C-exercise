#include <iostream>
using namespace std;

int main() {

	int number, ndu, nngy;
	int S = 0;
	cout << "Nhap so nguyen: ";
	cin >> number;

	// giai bang vong lap while
	while (number != 0)
	{
		ndu = number % 10;
		S = S + ndu;
		number /= 10;

	}
	cout << "Tong cac chu so la: " << S << endl;

	// giai bang vong lam for

	return 0;
}