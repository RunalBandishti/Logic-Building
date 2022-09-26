#include<iostream>
using namespace std;

int Strlenx(char *str){
    int iCnt=0;
    while(*str != '\0'){
        if(*str == ' '){
            iCnt++;
        }
        str++;
    }

    return iCnt;
}


int main(){
    int iRet = 0;
    char Arr[20];
    
    cout<<"Enter a string:";
    cin.getline(Arr,20);
    

    iRet = Strlenx(Arr);

    cout<<"String length:"<<iRet<<endl;
    cout<<"L or l occured times:"<<iRet<<endl;

    return 0;
}