#include <iostream>
using namespace std;

double tongdayso(int n)
{
    double sum=0;
    for (double i=1;i<=n;i++) 
    {
        sum+=i/(i+1);
    }
    return sum;
}
int main() {
    cout << "S(n)=1/2 + 2/3 + 3/4 + ... + n/(n+1)   (n>0)"<<endl;
    cout<<"Nhap n: ";
    int n;
    cin >>n;
    if (n>0)
    cout<<"Tong day so la: "<<tongdayso(n)<<endl;\
    else
    cout<<"Dau vao khong hop le!";
    return 0;
}