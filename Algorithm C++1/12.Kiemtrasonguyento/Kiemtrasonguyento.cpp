#include <iostream>
using namespace std;
bool kiemtrasonguyento(int number)
    {
    for (int i=2;i<number/2;i++)
            {
                if (number%i==0)
                {
                    return false;
                }
            }
    return true;
    }
int main()
{
    int number;
    cout<<"Nhap so nguyen to: ";
    cin>>number;

    if ((kiemtrasonguyento(number)) && number>=2)
        cout<<"La so nguyen to"<<endl;
    else 
        cout<<"Khong phai so nguyen to!"<<endl;
    return 0;
}