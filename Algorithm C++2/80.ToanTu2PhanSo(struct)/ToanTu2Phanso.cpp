#include <iostream>
#include <iomanip>
using namespace std;
struct phanSo{
    int tu;
    int mau;
};
void nhapPhanSo(phanSo &C){
    cout<<"Nhap tu so: ";cin>>C.tu;
    do {
        cout<<"Nhap mau so: ";cin>>C.mau;
        if (C.mau==0) {
            cout<<"Vui long nhap mau so khac 0!"<<endl;
        }
    }
    while (C.mau==0);
}
void xuatPhanSo(phanSo C){
    cout<<C.tu<<"/"<<C.mau<<endl;
}
float tong(phanSo A,phanSo B){
    int TU,MAU;
    TU = (A.tu)*(B.mau) + (A.mau)*(B.tu);
    MAU = (A.mau)*(B.mau);
    return (float)TU/MAU;
}
float hieu(phanSo A,phanSo B){
    int TU,MAU;
    TU = (A.tu)*(B.mau) - (A.mau)*(B.tu);
    MAU = (A.mau)*(B.mau);
    return (float)TU/MAU;
}
float tich(phanSo A,phanSo B){
    int TU,MAU;
    TU = (A.tu)*(B.tu);
    MAU = (A.mau)*(B.mau);
    return (float)TU/MAU;
}
float thuong(phanSo A,phanSo B){
    int TU,MAU;
    TU = (A.tu)*(B.mau);
    MAU = (A.mau)*(B.tu);
    return (float)TU/MAU;
}

int main(){
    phanSo A,B;
    nhapPhanSo(A);
    nhapPhanSo(B);
    cout<<"Phan so 1: ";xuatPhanSo(A);
    cout<<"Phan so 1: ";xuatPhanSo(B);
    cout<<"Tong la: "<<tong(A,B)<<endl;
    cout<<"Hieu la: "<<hieu(A,B)<<endl;
    cout<<"Tich la: "<<setprecision(2)<<fixed<<tich(A,B)<<endl;
    cout<<"Thuong la: "<<setprecision(2)<<fixed<<thuong(A,B)<<endl;
    return 0;

}