#include <iostream>
using namespace std;

//fact function
long double fact(int number)
{   long double fact(1);
    for (int i=1;i<=number;i++)
    {
        fact*=i;
    }   
    return fact;
}
int main()
{   
    int number;
    cout<<"Enter integer: ";
    cin>>number;

    //check
    if (number==0)
    cout<<"Factorial = 1"<<endl;
    else if (number>0)
    cout <<"Factorial = "<<fact(number)<<endl;
    else
    cout<<"Nhap sai du lieu!"<<endl;

    return 0;
}