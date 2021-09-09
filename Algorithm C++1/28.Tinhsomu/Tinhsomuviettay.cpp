#include <iostream>
using namespace std;

long pow(double x, double y)
{   long pow =1;
    for (int i=1;i<=y;i++)
        { 
            pow=pow*x;
        }
        return pow;
}
int main() 
{   
    int x,y;
    cout<<"P(x,y)=x^y"<<endl;
    cout<<"Nhap so nguyen x: ";
    cin>>x;
    cout<<"Nhap so nguyen y: ";
    cin>>y;
    cout<<"x^y = "<<pow(x,y)<<endl;
    return 0;
}