#include <iostream>
using  namespace std;
#define MAX 10000
void nhapmang(int &n,int A[]){
    for (int i=0;i<n;i++){
        cout<<"A["<<i<<"]= ";
        cin>>A[i];
    }
}
void xuatphantuduong(int n,int A[]){
    for (int i=0;i<n;i++){
        if (A[i]>0){
            cout<<"Phan tu duong dau tien la: "<<endl;
            cout<<"A["<<i<<"]= "<<A[i]<<endl;
            break;
        }
    }
}
int main(){
    int n;
    cout<<"Nhap so phan tu: ";
    cin >> n;
    int A[MAX];
    if (n>0){
    nhapmang(n,A);
    xuatphantuduong(n,A);
    }
    else
    cout<<"Vui long nhap dung dinh dang!"<<endl;
    return 0;
}