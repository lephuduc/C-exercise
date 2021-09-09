#include <iostream>
using namespace std;

void nhapmang(int &n, int A[]){
    for (int i = 0;i<n;i++){
        cout<<"A["<<i<<"]= ";
        cin>>A[i];
    }
}
void kiemtravaxuatphantu(int n,int A[],int x){
    bool is=false;
    for (int i = 0;i<n;i++){
        if ((A[i]<=x) && (A[i]>=1))
            cout<<"A["<<i<<"]= "<<A[i]<<endl;
            is = true;
    }
    if (is==false)
    cout<<"Khong co phan tu nao thuoc khoan 1 toi x!"<<endl;
}
int main(){
    int A[1000];
    int n,x;
    cout<<"Nhap so luong phan tu: ";
    cin>>n;
    if (n>0){
    nhapmang(n,A);
    cout<<"Nhap x: ";
    cin>>x;
    kiemtravaxuatphantu(n,A,x);
    }
    else
    cout<<"Nhap chua dung dinh dang!";
    return 0;
}