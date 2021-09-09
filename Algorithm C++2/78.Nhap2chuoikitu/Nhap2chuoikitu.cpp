#include <iostream>
#include <time.h>
#include <cstring>
#include<cstdio>
#include <string>
using namespace std;

void So_sanh_Noi_Chuoi(char *chuoi1, char *chuoi2){
	char *chuoinoi;
	int length1=strlen(chuoi1), length2=strlen(chuoi2);
	int length=length1+length2;
	chuoinoi=new char [length];
	chuoinoi[0]='\0';
	if(length1>length2){
		cout<<"\nChuoi 1 lon hon chuoi 2";
		strcat(chuoinoi,chuoi1);
		strcat(chuoinoi,chuoi2);
		chuoinoi[length]='\0';
		cout<<"\nChuoi sau khi noi: ";
		puts(chuoinoi);
	}
	else if(length1<length2){
		cout<<"\nChuoi 2 lon hon chuoi 1";
		strcat(chuoinoi,chuoi2);
		strcat(chuoinoi,chuoi1);
		chuoinoi[length]='\0';
		cout<<"\nChuoi sau khi noi: ";
		puts(chuoinoi);
	} 
	else{
	    cout<<"\nChuoi 1 bang chuoi 2";
    }
}
int main(){
    char *chuoi1, *chuoi2;
	chuoi1=new char[99];
	chuoi2=new char[99];
		cout<<"Nhap chuoi ky tu 1: "; 
		gets(chuoi1);
		cout<<"Nhap chuoi ky tu 2: ";
		gets(chuoi2);
		cout<<"Chuoi ky tu 1 la: "<< chuoi1;
		//or cout<<"\nChuoi ky tu 1 la: "; puts(chuoi1);
		cout<<"\nChuoi ky tu 2 la: "<< chuoi2;
		
		So_sanh_Noi_Chuoi(chuoi1, chuoi2);
			
	cout<<endl;
    return 0;
}