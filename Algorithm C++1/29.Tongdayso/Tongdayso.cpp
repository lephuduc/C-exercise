#include <iostream>
using namespace std;
int tongsotunhien(int n)
{
    int sum_=0;
    for (int i=1; i<=n; i++)
    {
        sum_+=i;
    }
    return sum_;
}
int tongdayso(int n)
{
    int sum=0;
    for (int i=1; i<=n; i++)
    {
        sum+=tongsotunhien(i);
    }
    return sum;
}
int main() 
{   cout<<"S(n)= 1 + (1+2) + (1+2+3) + ... + (1+2+3+..+n)"<<endl;
    int n;
    cout<<"Nhap n: ";
    cin >>n;
    cout<<"Tong day so la: "<<tongdayso(n)<<endl;
    return 0;
}