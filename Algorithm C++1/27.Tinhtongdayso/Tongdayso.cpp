#include <iostream>
using namespace std;
long tongdayso(int n)
{   long sum=0;
    for (int i=1;i<=n;i++)
        { 
          sum+=i;
        }
    return sum;
}
double tongphanso(int n)
{   double sum=0;
    for (int i=1;i<=n;i++)
    {
        sum+=double(1)/double(tongdayso(i));
    }
    return sum;
}
int main() 
{   
    cout<<"S(n)= 1 + 1/(1+2) + 1/(1+2+3) + ... + 1/(1+2+3+..+n) (n>0)"<<endl;
    int n;
    cout<<"Nhap n: ";
    cin>> n;
        if (n>0)
            cout<<"Tong day so la: "<<tongphanso(n)<<endl;
        else 
            cout<<"Dinh dang dau vao khong hop le!"<<endl;
    return 0;
}