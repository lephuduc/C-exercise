#include <iostream>
#include <time.h>
#include <cstring>
using namespace std;
int demchuoi(char *chuoi){
    int count = 0;
    for (int i=0; i<strlen(chuoi); i++){
        if (chuoi[i]=='a'){
            count ++;
        }
    }
    return count;
}
int main(){
    char *chuoi;
    int q;
    chuoi = new char[100];
	gets(chuoi);
    q=demchuoi(chuoi);
    if (q==0){
        cout<<"Ko co ki tu a!";
    }
    else{
        cout<<"So ki tu a la: "<<q<<endl;
    }
    return 0;
}