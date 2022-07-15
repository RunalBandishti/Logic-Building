//Program to  print no. of  * accepted from user input using while 
#include <stdio.h>

void Display(int iNo){

    while(iNo > 0){
        printf("* \n");
        iNo--;
    }
}

int main(){
    int iValue = 0;

    printf("Enter number of * :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}