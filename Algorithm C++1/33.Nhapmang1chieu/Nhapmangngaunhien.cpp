#include <iostream>
#include <cstdlib>
#include <random>
#include <ctime>

#define MAX 1000

using namespace std;

void nhapmang(int n,int A[])
    {   srand(time(NULL));
        for (int i=0;i<n;i++)
            A[i]=rand()*-1;
    }
void xuatmang(int n,int A[]){
    for (int i=0;i<n;i++){
        cout<<"A["<<i<<"] = "<<A[i]<<endl;
    }
}
int main() {
    
    int n;
    cout<<"Nhap so luong phan tu: ";
    cin>>n;
    int Arr[MAX];
    nhapmang(n,Arr);
    cout<<"Cac phan tu trong mang: "<<endl;
    xuatmang(n,Arr);
    return 0;
}