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
bool KTPT(int n){
    if ((n%3==0 || n%5==0) && n>0) return true;
    else return false;
}
void xuatmangB(int n, int A[]){
    for (int i=1;i<=n;i++){
        if (KTPT(A[i])){
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
        cout<<"Cac so la boi 3 hoac 5 la: "<<endl;
        xuatmangB(n,A);
    }
    return 0;
}