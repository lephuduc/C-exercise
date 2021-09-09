#include <iostream>
#include <math.h>
using namespace std;

#define MAX 1000
void nhapmang(int &n,int A[]){
    for (int i=0;i<n;i++)
    {
        cout<<"A["<<i<<"]=";
        cin >> A[i];
    }
}
bool KTSCP(int n){
    int x=sqrt(float(n));
    //cout<<x<<endl;
    if (x*x==n)
        return true;
    else 
        return false;
}
void xuatmang(int n,int A[]){
    for (int i=0;i<n;i++){
        if (KTSCP(A[i]))
            cout<<"A["<<i<<"]="<<A[i]<<endl;
}
}
int main(){
    int A[MAX];
    int n;
    cout<<"Nhap so phan tu: ";
    cin>>n;
    if (n>0){
    nhapmang(n,A);
    cout<<"Ca phan tu so ching phuong la: "<<endl;
    xuatmang(n,A);
    }
    else
    cout<<"Dau vao khong hop le!"<<endl;
    return 0;
}