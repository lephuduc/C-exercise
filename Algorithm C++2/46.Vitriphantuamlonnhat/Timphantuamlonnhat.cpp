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
    long long  max=-1000000000;
    int index=0;
    for (int i=0;i<n;i++){
        if (A[i]<0){
            if (A[i]>max && i<=n && A[i]<0){
            max=A[i];
            index=i;
            }
        }
    }
    if (max==-1000000000){
        cout<<"Khong co phan tu am!"<<endl;
    }
    else{
        cout<<"Phan tu am lon nhat la: "<<endl;
        cout<<"A["<<index<<"]= "<<max;
        }   
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