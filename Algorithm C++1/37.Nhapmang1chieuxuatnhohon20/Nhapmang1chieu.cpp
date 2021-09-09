#include <iostream>
using namespace std;
#define MAX 1000
void nhapmang(int &n,int A[]){
    for (int i=0;i<n;i++){
        cout<<"A["<<i<<"]=";
        cin>>A[i];
    }
}
void xuatmang(int n,int A[]){
    for (int i=0;i<n;i++){
        if (A[i]<20 && A[i]%2==0)
        cout<<"A["<<i<<"]="<<A[i]<<endl;
    }
}
int main() {
    cout<<"Nhap so luong phan tu: ";
    int n;
    int A[MAX];
    cin >>n;
    nhapmang(n,A);
    cout<<"Phan tu chan nho hon 20 la: "<<endl;
    xuatmang(n,A);
    return 0;
}