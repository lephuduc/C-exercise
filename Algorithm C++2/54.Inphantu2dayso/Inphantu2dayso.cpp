#include <iostream>
#include <time.h>
using namespace std;

void nhapmang(int &n, int A[]){
    for (int i = 0;i<n;i++){
        A[i]=rand()%100;
    }
}
void xuatmang(int n,int A[]){
    for (int i=0;i<n;i++){
        cout<<"A["<<i<<"] = "<<A[i]<<endl;
    }
}
void KiemtraA(int n1,int n2,int A[],int B[]){
    int i,j,count=0;
    for (i=0;i<n1;i++){
        for (j=0;j<n2;j++){
            if (A[i]==B[i])
                break;
        }
        if (j=n2){
            cout<<A[i]<<" ";
            count++;
        }
    }
    if (count==0)
        cout<<"\nTat ca phan tu deu giong nhau"<<endl;
}
void KiemtraB(int n1,int n2,int A[],int B[]){
    cout<<"\nPhan tu xuat hien trong ca 2 day la: "<<endl;
    for (int i=0;i<n1;i++){
        for (int j=0;j<n2;j++){
            if (A[i]==B[j]){
                cout<<A[i]<<" ";
            }
        }
    }
}
int main(){
    srand(time(NULL));
    int A[1000],B[1000];
    int n1,n2;
    cout<<"Nhap so luong phan tu day 1: ";
    cin>>n1;
    cout<<"Nhap so luong phan tu day 2: ";
    cin>>n2;
    if (n1>0 && n2>0){
    nhapmang(n1,A);
    nhapmang(n2,B);
    xuatmang(n1,A);
    cout<<endl;
    xuatmang(n2,B);
    cout<<endl;
    KiemtraA(n1,n2,A,B);
    KiemtraB(n1,n2,A,B);
    }
    else
    cout<<"Nhap chua dung dinh dang!";
    return 0;
}