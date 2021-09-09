#include <iostream>
using namespace std;


long long tinhdaysole(int n)
{   long long tich = 1;
    for (int i=1;i<=n;i++)
    { 
        if (i%2!=0) 
        tich*=i;
    }
    return tich;
}
int main()
{
    int n;
    cout<<"Nhap n: ";
    cin >>n;
    cout<<"Tich day so la: "<<tinhdaysole(2*n+1)<<endl;
}