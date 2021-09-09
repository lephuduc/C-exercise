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
double tongdayso(int n)
{   double sum;
    for (double i=1;i<=n;i++)
        {
            sum+=double(1)/double(giaithua(i));
        }
        return sum;
}
int main() 
{
    cout<<"S(n)=1 + 1/2! + 1/3! + ... + 1/n! (n>0)"<<endl;
    cout<<"Nhap n: ";
    int n;
    cin >>n;
    if (n>0) 
        cout<<"Tong day so la: "<<tongdayso(n)<<endl;
    else
        cout<<"Dinh dang dau vao khong hop le"<<endl;
    return 0;
}