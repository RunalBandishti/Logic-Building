//Program to  print hello if number is less than 10 else print demo
#include <stdio.h>

void Display(int iNo){

    if(iNo<10){
        printf("Hello \n");
    }
    else{
        printf("Demo \n");
    }
}

int main(){
    int iValue = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}