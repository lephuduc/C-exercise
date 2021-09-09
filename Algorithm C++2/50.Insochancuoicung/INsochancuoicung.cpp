#include <iostream>
using namespace std;
#define MAX 1000

void nhapmang(int &n,int A[]){
    for (int i=0;i<n;i++){
        cout<<"A["<<i<<"]= ";
        cin>>A[i];
    }
}
void xuatmang(int n,int A[]){
    int index=-1;
    for (int i=0;i<n;i++){
        if (A[i]%2==0)
            index = i;
    }
    if (index!=-1){
    cout<<"Vi tri cuoi cung co chan la: "<<endl;
    cout<<"A["<<index<<"]= "<<A[index]<<endl;
    }
    else
    cout<<"Khong co phan tu chan nao trong mang!";
}
int main(){
    int A[MAX];
    int n;
    cout<<"Nhap so luong phan tu: ";
    cin>>n;
    if (n>0){
        nhapmang(n,A);
        xuatmang(n,A);
    }
    return 0;
}
