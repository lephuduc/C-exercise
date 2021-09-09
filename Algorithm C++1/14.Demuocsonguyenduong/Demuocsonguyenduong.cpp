#include <iostream>
using namespace std;

int amout_(int number)
{   int amout(0);
for (int i=1;i<=number;i++)
    if (number%i==0)
        {
            amout +=1;
        }
    return amout;
}
int main()
{   int number;
    cout<<"Enter number: ";
    cin >>number;
    cout<<"Amout of integers: "<<   amout_(number)<<endl;
    return 0;
}