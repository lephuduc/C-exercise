#include <iostream>
using namespace std;

//dequy
#if 0
int giaithua(int x)
{
	if (x > 1)
	{
		return x * giaithua(int(x - 1));
	}
	return x;
}
#endif

//vong lap for
#if 1 
int giaithua2(int nInput)
{
	int nFact(1);
	for (int i = nInput; i > 0 /*DK dung*/; i = i - 1)
	{
		nFact = nFact * i;
	}
	return nFact;
}
#endif


//chay chuong trinh va xuat ra man hinh
int main()
{
	int nInput;
	cout<<"Enter integer: ";
	cin >> nInput;

	//cout << giaithua(nInput) << endl;
	cout << giaithua2(nInput) << endl;
}