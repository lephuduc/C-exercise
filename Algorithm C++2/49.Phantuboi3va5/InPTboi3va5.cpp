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
bool KTB(int n){
    if (n%3==0 && n%5==0)
        return true;
    else 
        return false;
}
void xuatmang(int n,int A[]){
    for (int i=0;i<n;i++){
        if (KTB(A[i]))
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
    cout<<"Cac phan tu la boi 3 va 5 la: "<<endl;
    xuatmang(n,A);
    }
    else
    cout<<"Dau vao khong hop le!"<<endl;
    return 0;
}