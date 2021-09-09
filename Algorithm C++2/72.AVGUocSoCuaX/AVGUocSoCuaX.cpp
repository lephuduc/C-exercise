#include <iostream>
#include <time.h>
using namespace std;
void nhapMang(int n,int A[]){
    srand(unsigned(time(NULL)));
    for (int i = 0; i < n; i++){
        A[i] = rand()%100-rand()%100;
    }
}
void xuatMang(int n,int A[]){
    for (int i = 0; i < n; i++){
        cout<<"A["<<i<<"]="<<A[i]<<endl;
    }
}
int AVG(int n,int A[],int x){
    double sum = 0;
    double count=0;
    for (int i = 0; i < n; i++){
        if (x%A[i]==0){
            sum+=A[i];
            count++;
        }
    }
    return sum/count;
}
int main(){
    int n,x;
    cin>>n;
    cin>>x;
    int A[1000];
    if (n>0){
        nhapMang(n,A);
        xuatMang(n,A);
        cout<<"AVG Uoc cua x la: "<<AVG(n,A,x);
    }
    return 0;
}