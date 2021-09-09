#include <iostream>
using  namespace std;
#define MAX 10000
void nhapmang(int &n,int A[]){
    for (int i=0;i<n;i++){
        cout<<"A["<<i<<"]= ";
        cin>>A[i];
    }
}
int timmin(int n,int A[]){
    int min =99999;
    for (int i=0;i<n;i++){
        if (A[i]>0){
            if (A[i]<min) min = A[i];
        }
    }
    return min;
    
}
void phantuduongbe(int n,int A[]){
    if (n>0){
    int min = timmin(n,A);
    if (min!=99999)
    cout<<"Phan tu duong be nhat la: "<<min<<endl;
    else
    cout<<"Khong co phan tu duong!"<<endl;
    }
    else
    cout<<"Vui long nhap dung dinh dang!"<<endl;
}
int main(){
    int n;
    cout<<"Nhap so phan tu: ";
    cin >> n;
    int A[MAX];
    nhapmang(n, A);
    phantuduongbe(n,A);
    return 0;
}