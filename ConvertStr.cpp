#include<iostream>
using namespace std;

void ConvertStr(char str[]){
    
    while(*str != '\0'){
        if((*str >= 'A') && (*str <= 'Z')){
            *str = *str + 32;
        }
        else if((*str >= 'a') && (*str <= 'z')){
            *str = *str - 32;
        }
        str++;
    }
}

int main(){
    char Arr[20];
    
    cout<<"Enter a string:";
    cin.getline(Arr,20);
    
    ConvertStr(Arr);

    cout<<"String converted:"<<Arr<<endl;

    return 0;
}