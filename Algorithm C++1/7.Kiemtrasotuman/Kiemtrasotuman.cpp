#include <iostream>
#include <cmath>
#include "Header.h"
using namespace std;

int main()
{	
	//nhập và tìm số mũ của số tự mãn
	int nInput;
	cout << "Enter integer: ";
	cin >> nInput;
	int nSomu = demsochuso(nInput);
	
	//thực hiện tính số tự mãn
	double nNar(0);
	int nDu;
	int nBandau = nInput;

	while (nBandau % 10 != 0 || nBandau/10>0)
		{
			nDu = nBandau % 10;
			nNar = nNar + pow(nDu,nSomu);
			nBandau = nBandau / 10;
		}

	//kiểm tra 
	if (nNar == nInput)
		{
			cout << "La so tu man co " << nSomu << " chu so" << endl;
		}
	else
		{
			cout << "Khong phai la so tu man! " << endl;
		}
	return 0;
}

