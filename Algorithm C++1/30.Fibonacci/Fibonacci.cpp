#include <iostream>
using namespace std;

// hàm in dãy Fibonacci
void Fibonacci(int n)
{   long long so1=0,so2=1,temp;
    while (n>0)
        {
            cout<< so1<<" ";
            //hoán đổi cho số thứ 2 thành tổng 2 số trước đó, số thứ 1 bằng số thứ 2
            temp=so1+so2;
            so1=so2;
            so2=temp;
            n--;
        }
}
int main() 
{   cout<<"Nhap n: ";
    int n;
    cin>>n;
    if (n>=1)
    {
        cout<<"Day so Fibonacci co "<<n<<" chu so la: "<<endl;
        Fibonacci(n);
    }
    else
        cout<<"Vui long nhap dung so phan tu n!";
    return 0;
}