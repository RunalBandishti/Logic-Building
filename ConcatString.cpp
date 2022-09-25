#include<iostream>
using namespace std;

void StrCat(char *fStr,char *sStr){
    while(*sStr != '\0'){
        sStr++;
    }
    while(*fStr !='\0'){
        *sStr = *fStr;
        fStr++;
        sStr++;
    }
    *sStr = '\0';
    
}

int main(){
    char Arr[20];
    char Brr[20];
    
    cout<<"Enter a string:";
    cin.getline(Arr,20);

    cout<<"Enter second string:";
    cin.getline(Brr,20);
    
    StrCat(Arr,Brr);

    cout<<"String after Concatenation:"<<Brr<<endl;    

    return 0;
}