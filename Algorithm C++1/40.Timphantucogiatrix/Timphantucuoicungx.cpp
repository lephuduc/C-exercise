#include <iostream>
using namespace std;
#define MAX 1000

void nhapmang(int &n,int A[]){
    for (int i=0;i<n;i++){
        cout<<"A["<<i<<"]= ";
        cin>>A[i];
    }
}
void xuatmang(int n,int A[],int x){
    int index;
    for (int i=0;i<n;i++){
        if (A[i]==x)
            index = i;
    }
    cout<<"A["<<index<<"]= "<<A[index]<<endl;
}
int main(){
    int A[MAX];
    int n;
    cout<<"Nhap so luong phan tu: ";
    cin>>n;
    if (n>0){
        nhapmang(n,A);
        int x;
        cout<<"Nhap gia tri x can tim: ";
        cin>>x;
        cout<<"Vi tri cuoi cung co x la: "<<endl;
        xuatmang(n,A,x);
    }
    return 0;
}
