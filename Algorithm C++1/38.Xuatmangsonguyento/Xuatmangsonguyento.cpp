#include <iostream>
using namespace std;
#define MAX 1000
void nhapmang(int &n,int A[]){
    for (int i=0; i<n;i++){
        cout<<"A["<<i<<"]=";
        cin>>A[i];
    }
}
bool songuyento(int number){
    int count=0;
    for (int i =1;i<=number;i++){
        if (number%i==0){
        count+=1;
        }
    }
    if (count==2)
    return true;
    else    
    return false;
}
void xuatmangsonguyento(int n,int A[]){
    for (int i=0;i<n;i++){
    if (songuyento(A[i]))
        cout<<"A["<<i<<"]= "<<A[i]<<endl;
    }
}
int main(){
    cout<<"Nhap so luong phan tu: ";
    int n;
    cin>>n;
    int A[MAX];
    if (n>0){
    nhapmang(n,A);
    cout<<"Thanh phan so nguyen to la: "<<endl;
    xuatmangsonguyento(n,A);
    }
    else
    cout<<"Dinh dang khong hop le!";
    return 0;
}