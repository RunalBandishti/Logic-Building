#include<stdio.h>

int DigitsReverse(int iNo){
    int iDigit = 0;

    if(iNo <0){
        iNo = -iNo;
    }

    while(iNo != 0){
        iDigit = iNo %10;
        iNo = iNo/10;
        printf("%d \n", iDigit);
    }
}

int main(){
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number:");
    scanf("%d",&iValue);

   DigitsReverse(iValue);

    // printf("%d",iRet);

    return 0;

}