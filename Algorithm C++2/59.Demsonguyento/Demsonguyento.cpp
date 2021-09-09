#include <iostream>
#include <time.h>
using namespace std;

void nhapmang(int &n,int A[]){
    srand(unsigned(time(NULL)));
    for (int i=0; i<n; i++){
        A[i] = rand()%100-rand()%100;
    }
}
void xuatmang(int n,int A[]){
    for (int i=0; i<n; i++){
        cout<<"A["<<i<<"]= "<<A[i]<<endl;
    }
}
bool KTSNT(int n){
    int count=0;
    for (int i=1;i<=n;i++){
        if (n%i==0) count++;
    }
    if (count==2) return true;
    else return false;
}
void xuatmangSNT(int n, int A[]){
    for (int i=0;i<n;i++){
        if (KTSNT(A[i])){
            cout<<A[i]<<" ";
        }
    }
}
int main(){
    int n;
    int A[1000];
    cout<<"Nhap so luong phan tu: ";
    cin>>n;
    if (n>0){
        nhapmang(n,A);
        xuatmang(n,A);
        xuatmangSNT(n,A);
    }
    return 0;
}