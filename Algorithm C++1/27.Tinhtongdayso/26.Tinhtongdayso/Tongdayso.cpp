#include <iostream>
using namespace std;

long giaithua(int n)
{   long fact=1;
    if (n==0)
        return 1;
    else
    {
    for (int i=1;i<=n;i++)
        { 
          fact*=i;
        }
    return fact;
    }
}
long tongsotunhien(int n)
{ 
    long sum=0;
    for (int i=1;i<=n;i++)
        {
            sum+=i;
        } 
        return sum;
}
double tongdayso(int n)
{
    double sum=0;
    for (int i=1;i<=n;i++) 
    {
        sum+=double(tongsotunhien(i))/double(giaithua(i));
    }
    return sum;
}
int main() 
{   cout<<"S(n)= 1 + (1+2)/2! + (1+2+3)/3! + ... + (1+2+3+…+n)/n! (n>0)"<<endl;
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    if (n>0)
        cout<<"Tong day so la: "<<tongdayso(n)<<endl;
    else
        cout<<"Dinh dang dau vao khong hop le! ";
    return 0;
}