#include <iostream>
using namespace std;
#define MAX 1000

void nhapmang(int &n,int A[]){
    for (int i=0;i<n;i++){
        cout<<"A["<<i<<"]=";
        cin>>A[i];
    }
}
void xuatsoam(int n,int A[]){
        for (int i=0;i<n;i++)
        if (A[i]<0) cout<<"A["<<i<<"]= "<<A[i]<<endl;
    }
int main() {
    int A[MAX];
    cout<<"Nhap so luong phan tu: ";
    int n;
    cin>>n;
    nhapmang(n,A);
    cout<<"Cac phan tu am la: "<<endl;
    xuatsoam(n,A);
    return 0;
}