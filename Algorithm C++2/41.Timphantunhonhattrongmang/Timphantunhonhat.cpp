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
    int min,index;
    min=A[0];
    index=0;
    for (int i=0;i<n;i++){
        if (A[i]<min){
        min=A[i];
        index=i;
        }
    }
    cout<<"A["<<index<<"]= "<<min<<endl;
}
int main(){
    int A[MAX];
    int n;
    cout<<"Nhap so luong phan tu: ";
    cin>>n;
    if (n>0){
        nhapmang(n,A);
        cout<<"Phan tu nho nhat trong mang la: "<<endl;
        xuatmang(n,A);
    }
    return 0;
}
