//Program to  print no. of  * accepted from user input 
#include <stdio.h>

void Display(int iNo){

    for (int iCnt = 1; iCnt<=iNo;iCnt++){
        printf("* \n");
        
    }
}

int main(){
    int iValue = 0;

    printf("Enter number of * :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}