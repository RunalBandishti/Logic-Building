#include<stdio.h>

int MultDigits(int iNo){
    int iDigit = 0;
    int iProd ;

    while(iNo != 0){
        iDigit = iNo % 10;
        iNo = iNo /10;
        iProd = iProd * iDigit;
        
    }
    return iProd;
}

int main(){
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d",iRet);

    return 0;
}