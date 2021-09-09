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
    int max,index;
    max=A[0];
    index=0;
    for (int i=0;i<n;i++){
        if (A[i]>max){
        max=A[i];
        index=i;
        }
    }
    cout<<"A["<<index<<"]= "<<max<<endl;
}
int main(){
    int A[MAX];
    int n;
    cout<<"Nhap so luong phan tu: ";
    cin>>n;
    if (n>0){
        nhapmang(n,A);
        cout<<"Phan tu lon nhat trong mang la: "<<endl;
        xuatmang(n,A);
    }
    return 0;
}