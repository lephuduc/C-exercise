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
void DemSoLanX(int n,int A[],int x){
    int cound =0 ;
    for (int i=0; i<n; i++){
        if (A[i]==x) cound++;
    }
    cout<<"So lan xuat hien cua x la: "<<cound<<endl;
}
int main(){
    int n,x;
    int A[1000];
    cout<<"Nhap so luong phan tu: ";
    cin>>n;
    cout<<"Nhap x: ";
    cin>>x;
    if (n>0){
    MangNgauNhien(n,A);
    XuatMang(n,A);
    DemSoLanX(n,A,x);
    }
    else
    cout<<"Dinh dang khong hop le!"<<endl;
    return 0;
}