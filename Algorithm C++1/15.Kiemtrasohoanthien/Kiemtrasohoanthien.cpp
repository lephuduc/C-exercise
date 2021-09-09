#include <iostream>
using namespace std;

int tonguoc(int number)
{   int sum(0);
    for (int i= 1;i<number;i++)
    {
        if (number%i==0)
            sum+=i;
    }
    return sum;
}
int main()
{   int number;
    cout<<"Enter integer: ";
    cin>>number;
    if (tonguoc(number)==number)
        cout<<"Perfect number"<<endl;
    else
        cout<<"Not perfect number"<<endl;
    return 0;
}