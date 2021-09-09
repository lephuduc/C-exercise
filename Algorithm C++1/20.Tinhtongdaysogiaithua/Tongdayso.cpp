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
long long tongdayso(int number)
{   long long sum=0;
    for  (int i=1;i<=number;i++) 
    {   
        sum+=giaithua(i);
    }
    return sum;
}
int main() 
{   int n;
    cout<<"Day so: S(n)=1 + 1.2 + 1.2.3 +...+ 1.2.3...n    (n>0)"<<endl;
    cout<<"Nhap n: ";
    cin >>n;
    if (n>0)
        cout<<"Tong day so la: "<<tongdayso(n)<<endl;
    else
        cout<<"Ban nhap sai yeu cau"<<endl;
    return 0;
}