#include <iostream>
using namespace std;

int main() 
{
	int yStart,yEnd;
	cout << "Starting year: ";
	cin >> yStart;
	cout << "Ending year: ";
	cin >> yEnd;
	cout << "Leap year: ";

	
	for (int i = yStart;i<=yEnd;i++)
	{
		if (i % 4 == 0 && i % 100 != 0) 
			cout << i << ",";
		else if (i%400==0)
			cout << i << ",";
	}
	return 0;
}