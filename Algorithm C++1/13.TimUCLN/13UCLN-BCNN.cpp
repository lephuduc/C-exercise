#include <iostream>
using namespace std;

int UCLN(int a ,int b)
{  
    while (a!=b)
    {
        if (a>b)
        a=a-b;
        else
        b=b-a;
    }
    return a;
}
int main() 
{
    int a,b,ucln,bcnn;
    cout<<("Nhap so thu nhat va so thu hai: ");
    cin>>a;
    cin>>b;
    if (a>0 &&b>0)
    {
    cout<<"UCLN: "<<UCLN(a,b)<<endl;
    cout<<"BCNN: "<<((a*b)/UCLN(a,b))<<endl;
    }
    else
    cout<<"Ban nhap sai du lieu!"<<endl;
    return 0;
}
