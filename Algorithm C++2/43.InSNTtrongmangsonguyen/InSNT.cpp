#include <iostream>
#include "time.h"
#define MAX 1000
using  namespace std;

void nhapmangngaunhien(int &n,int A[]){
    for (int i= 0;i<n;i++){
        A[i]=rand();
    }
}
bool KTSNT(int n){
    int count=1;
    for (int i=1;i<=n;i++){
        if (n%i==0){
        count++;
        }
    }
    if (count ==3)
    return true;
    else
    return false;
}
void xuatmang(int n,int A[]){
    for (int i= 0;i<n;i++){
        cout<<"A["<<i<<"]="<<A[i]<<endl;
    }
}
void xuatmangSNT(int n,int A[]){
    for (int i= 0;i<n;i++){
        if (KTSNT(A[i]))
        cout<<"A["<<i<<"]="<<A[i]<<endl;
    }
}
int main() {
    srand(time(NULL));
    int n;;
    int A[MAX];
    cout<<"Nhap so luong phan tu: ";
    cin>>n;
    nhapmangngaunhien(n,A);
    xuatmang(n,A);
    cout<<"SNT: "<<endl;
    xuatmangSNT(n,A);
    return 0;
}