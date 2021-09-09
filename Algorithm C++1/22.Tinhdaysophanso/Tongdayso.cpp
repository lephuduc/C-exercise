#include <iostream>
using namespace std;

double sum(int n){
    double sum = 0;
    for (int i=1;i<=n;i++)
    {
        sum+=double(1)/i;
    }
    return sum;
}
int main() {
    int n;
    cout<<"S(n) = 1 + 1/2 + 1/3 + ... + 1/n (n>0)"<<endl;
    cout<<"Nhap n:";
    cin>>n;
    if (n>0)
    cout<<"Tong day so la: "<<sum(n)<<endl;
    else
    cout<<"Ban nhap sai dinh dang"<<endl;

    return 0;
}