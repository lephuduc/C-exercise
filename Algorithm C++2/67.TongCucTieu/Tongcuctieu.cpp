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
int boiChung(int n, int A[]){
    int sum=0;
    for (int i=0;i<n;i++){
        if (A[i]%5==0 && A[i]%3==0 && A[i]>0){
            sum+=A[i];
        }
    }
    return sum;
}
int main(){
    int n;
    int A[1000];
    cout<<"Nhap so luong phan tu: ";
    cin>>n;
    if (n>0){
        nhapmang(n,A);
        xuatmang(n,A);
        cout<<"Tong phan tu boi 3 va 5 la: "<<boiChung(n,A);
    }
    return 0;
}