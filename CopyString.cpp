#include<iostream>
using namespace std;

void CopyStr(char *src,char *dest){

    while(*src !='\0'){
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main(){
    char Arr[20];
    char Brr[20];
    
    cout<<"Enter a string:";
    cin.getline(Arr,20);
    
    CopyStr(Arr,Brr);

    cout<<"Copied String:"<<Brr<<endl;

    return 0;
}