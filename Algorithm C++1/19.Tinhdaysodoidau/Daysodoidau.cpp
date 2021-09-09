#include <iostream>
using namespace std;

int tongsole(int n)
{   int sum=0;
    for (int i = 1;i<=n;i++)
       {    
           if (i%2!=0)
           {
               sum+=i;
           }
       }
       return sum;
}
int tongsochan(int n)
{    int sum=0;
    for (int i = 1;i<=n;i++)
        {
            if (i%2==0)
            {
                sum+=i;
            }
        }
        return sum;
}
    
int main()
{
    int n;
    cout<<"Nhap n: ";
    cin >>n;
    cout<<"Tong day so la: "<<(tongsole(n)-tongsochan(n))<<endl;
    return 0;
}