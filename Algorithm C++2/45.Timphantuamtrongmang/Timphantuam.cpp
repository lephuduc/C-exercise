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
    int count=0;
    for (int i=0;i<n;i++){
        if (A[i]<0){
            cout<<"Phan dau tien am trong mang la: "<<endl;
            cout<<"A["<<i<<"]= "<<A[i]<<endl;
            count++;
            break;
            }
        }
    if (count==0)
        cout<<-1<<endl;
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