//Accept a number and check whether it is divisible by 5
#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int Check(int iNo){

    if((iNo % 5) == 0){
        return TRUE;
    }
    else{
        return FALSE;
    }
    
}
int main(){

    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter value:");
    scanf("%d",&iValue);

    bRet =Check(iValue);

    if(bRet == TRUE){
        printf("Divisible by 5 \n");
    }
    else{
        printf("Not Divisible by 5 \n");
    }

    return 0;
}