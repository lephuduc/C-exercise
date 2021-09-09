#include <iostream>
using namespace std;


long long tongdaysole(int n)
{   long long tong = 0;
    for (int i=0;i<=n;i++)
    { 
        if (i%2!=0) 
        tong+=i;
    }
    return tong;
}
int main()
{
    int n;
    cout<<"Nhap n: ";
    cin >>n;
    if (n>0)
    cout<<"Tich day so la: "<<tongdaysole(2*n+1)<<endl;
    else
    cout<<"n phai >0"<<endl;
    return 0;
}