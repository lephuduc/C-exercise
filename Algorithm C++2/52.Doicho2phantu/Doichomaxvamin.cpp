#include <iostream>
using namespace std;

void nhapmang(int &n, int A[]){
    for (int i = 0;i<n;i++){
        cout<<"A["<<i<<"]= ";
        cin>>A[i];
    }
}
int VTmax(int n,int A[]){
    int max = A[0];
    int index=0;
    for (int i = 0;i<n;i++){
        if (A[i]>max){
            max = A[i];
            index = i;
        }
    }
    return index;
}
int VTmin(int n,int A[]){
    int min = A[0];
    int index=0;
    for (int i = 0;i<n;i++){
        if (A[i]<min){
            min = A[i];
            index = i;
        }
    }
    return index;
}
void hoanvi(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
}
void doicho(int n,int A[]){
    int max=VTmax(n,A);
    int min=VTmin(n,A);
    cout<<"max: "<<A[max]<<" min: "<<A[min]<<endl;
    hoanvi(A[max],A[min]);
}
void xuatmang(int n,int A[]){
    for (int i=0;i<n;i++){
        cout<<"A["<<i<<"] = "<<A[i]<<endl;
    }
}
int main(){
    int A[1000];
    int n;
    cout<<"Nhap so luong phan tu: ";
    cin>>n;
    if (n>0){
    nhapmang(n,A);
    doicho(n,A);
    xuatmang(n,A);
    }
    else
    cout<<"Nhap chua dung dinh dang!";
    return 0;
}