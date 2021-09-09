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
int AVG(int n,int A[]){
    double sum = 0;
    double count=0;
    for (int i = 0; i < n; i++){
        if (A[i]%2!=0){
            sum+=A[i];
            count++;
        }
    }
    return sum/count;
}
int main(){
    int n;
    cin>>n;
    int A[1000];
    if (n>0){
        nhapMang(n,A);
        xuatMang(n,A);
        cout<<"AVG so le la: "<<AVG(n,A);
    }
    return 0;
}