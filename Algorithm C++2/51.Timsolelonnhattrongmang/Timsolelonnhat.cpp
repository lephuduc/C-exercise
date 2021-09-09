#include <iostream>
using namespace std;
void nhapmang(int &n, int A[]){
    for (int i = 0;i<n;i++){
        cout<<"A["<<i<<"]= ";
        cin>>A[i];
    }
}
void timsolelonnhat(int n,int A[]){
    int max=-1;
    for (int i = 0;i<n;i++){
        if (A[i]%2!=0 && A[i]>max){
            max=A[i];
        }
    }
    if (max==-1) cout<<"Khong co so le!";
    else cout<<"So le lon nhat trong mang la: "<<max;
}
int main(){
    int A[1000];
    int n;
    cout<<"Nhap so luong phan tu: ";
    cin>>n;
    if (n>0){
    nhapmang(n,A);
    timsolelonnhat(n,A);
    }
    else
    cout<<"Nhap chua dung dinh dang!";
    return 0;
}