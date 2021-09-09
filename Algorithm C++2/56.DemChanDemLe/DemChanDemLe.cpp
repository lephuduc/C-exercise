#include <iostream>
#include <time.h>
using namespace std;
void MangNgauNhien( int &n,int A[])
{
	srand((unsigned)time(NULL));
	for(int i=0; i<n; i++)
		A[i]=rand()%100 - rand()%100;
}
void XuatMang(int n,int A[]){
    for (int i=0; i<n; i++){
        cout<<"A["<<i<<"]= "<<A[i]<<endl;
    }
}
void DemPhanTuLe(int n, int A[]){
    int count = 0;
    for (int i=0; i<n; i++){
        if (A[i]%2!=0) count++;
    }
    cout<<"So phan tu le la: "<<count<<endl;
}
void DemPhanTuChan(int n, int A[]){
    int count = 0;
    for (int i=0; i<n; i++){
        if (A[i]%2==0) count++;
    }
    cout<<"So phan tu chan la: "<<count<<endl;
}
int main(){
    int n;
    int A[1000];
    cout<<"Nhap so luong phan tu: ";
    cin>>n;
    if (n>0){
    MangNgauNhien(n,A);
    XuatMang(n,A);
    DemPhanTuLe(n,A);
    DemPhanTuChan(n,A);
    }
    else
    cout<<"Dinh dang khong hop le!"<<endl;
    return 0;
}