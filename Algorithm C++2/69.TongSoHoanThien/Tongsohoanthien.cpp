#include <iostream>
#include <time.h>
using namespace std;

void nhapMang(int n,int A[]){
    srand(unsigned(time(NULL)));
    for (int i = 0; i < n; i++){
        A[i] = rand()%100-rand()%100;
    }
}
void xuatMang(int n,int A[]){
    for (int i = 0; i < n; i++){
        cout<<"A["<<i<<"]="<<A[i]<<endl;
    }
}
bool perfectNumber(int n){
    int sum=0;
    for (int i = 1; i < n; i++){
        if (n%i==0) sum+=i;
    }
    if (sum==n) return true;
    else return false;
}
void sum(int n,int A[]){
    int sum=0;
    for(int i = 0; i < n; i++){
        if (perfectNumber(A[i])){
            sum+=A[i];
        }
    }
    cout<<"Tong so hoan thien la: "<<sum<<endl;
}
int main(){
    int n;
    int A[1000];
    cout<<"Nhap so luong phan tu: ";
    cin>>n;
    if (n>0){
        nhapMang(n, A);
        xuatMang(n,A);
        sum(n, A);
    }
    else{
        cout<<"Dinh dang dau vao khong hop le! ";
    }
    return 0;
}