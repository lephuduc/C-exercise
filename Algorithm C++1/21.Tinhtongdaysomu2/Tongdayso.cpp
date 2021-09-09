#include <iostream>
using namespace std;

long sum(int n){
    long sum=0;
    for (int i=1;i<=n;i++) {
            sum+=i*i;
        }
        return sum;
}
int main() {
    int n;
    cout<<"Tinh S(n)= 1^2 + 2^2 + 3^2 + ... + n^2   (n>0)"<<endl;
    cout<<"Nhap n:";
    cin>>n;
    if (n>0)
    cout<<"Tong day so la: "<<sum(n)<<endl;
    else
    cout<<"Ban nhap sai dinh dang"<<endl;

    return 0;
}