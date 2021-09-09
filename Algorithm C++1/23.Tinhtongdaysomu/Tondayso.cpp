#include <iostream>
#include "math.h"
using namespace std;

long tongdaysomu(int n)
{   long sum=0;
    for (double i=1;i<=n;i++)
    {
        sum+=pow(i,i);
    }
    return sum;
}
int main() {
    int n;
    cout<<"S(n)= 1 + 2^2 + 3^3 + ... + n^n (n>=0)"<<endl;
    cout<<"Nhap n: ";
    cin>>n;
    if (n>=0)
        cout<<"Tong day so la: "<<tongdaysomu(n)<<endl;
    else
        cout<<"Bạn nhập sai dữ liệu"<<endl;
    return 0;
}