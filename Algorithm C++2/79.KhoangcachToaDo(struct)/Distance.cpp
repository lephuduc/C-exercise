#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
struct ToaDo{
    int x,y;
};
void nhapToaDo(ToaDo &M){
    cout<<"Nhap hoanh do: ";cin>>M.x;
    cout<<"Nhap tung do: ";cin>>M.y;
}
void xuatToaDo(ToaDo n){
    cout<<"("<<n.x<<","<<n.y<<")"<<endl;
}
double khoangCach(ToaDo A, ToaDo B){
    float distance = sqrt(pow(A.x-B.x,2)+pow(A.y-B.y,2));
    return distance;
}
int main(){
    ToaDo A, B;
    nhapToaDo(A);
    nhapToaDo(B);
    xuatToaDo(A);
    xuatToaDo(B);
    float dis=khoangCach(A,B);
    cout<<"Khoang cach 2 toa do la: "<<setprecision(2)<<fixed<<dis<<endl;
    return 0;
}