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
int sum_cuc_dai(int n, int A[]){
    int sum=0;
    if (A[0]>A[1]) {
    sum+=A[0];
    }
    if (A[n-1]>A[n-2]){
    sum+=A[n-1];
    }
    for (int i=1;i<n-1;i++){
        if (A[i]>A[i-1] && A[i]>A[i+1]){
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
        cout<<"Tong phan tu cuc dai la: "<<sum_cuc_dai(n,A);
    }
    return 0;
}