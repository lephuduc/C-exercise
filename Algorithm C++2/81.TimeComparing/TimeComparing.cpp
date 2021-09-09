#include <iostream>
using namespace std;



struct TIME{
    int hour,minute,second;
};
void inTime(TIME &t){
    cout<<"Nhap gio: ";cin>>t.hour;
    do{
    cout<<"Nhap phut: ";cin>>t.minute;
    if (t.minute>60 || t.minute<0){
        cout<<"Vui long nhap phut hop le!"<<endl;
    }
    }while(t.minute>60 || t.minute<0);
    do{
    cout<<"Nhap giay: ";cin>>t.second;
    if (t.second>60 || t.second<0){
        cout<<"Vui long nhap giay hop le!"<<endl;
    }
    }while(t.second>60 || t.second<0);
}
void outTime(TIME t){
    cout<<"Thoi gian la: "<<t.hour<<" gio "<<t.minute<<" phut "<<t.second<<" giay "<<endl;
}
void compar(TIME t1, TIME t2){
    int total_seconds_1=t1.hour*3600+t1.minute*60+t1.second;
    int total_seconds_2=t2.hour*3600+t2.minute*60+t2.second;
    if (total_seconds_1>total_seconds_2){
        cout<<"Thoi gian 1 lon hon!";
    }
    else if (total_seconds_2>total_seconds_1) {
         cout<<"Thoi gian 2 lon hon!";
    }
    else{
        cout<<"Hai thoi gian bang nhau!"<<endl;
    }
}
int main(){
    TIME t1,t2;
    inTime(t1);
    outTime(t1);
    inTime(t2);
    outTime(t2);
    compar(t1,t2);
    return 0;
}