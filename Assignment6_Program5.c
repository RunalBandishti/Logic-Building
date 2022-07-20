#include<stdio.h>

int CountDiff(int iNo){
    int iDigit = 0;
    int iSum = 0;
    int iSum1 = 0;

    while(iNo != 0){
        iDigit = iNo % 10;
        iNo = iNo /10;
        
        if(iDigit % 2 ==0){
            iSum = iSum + iDigit;
        }
        else if(iDigit % 2 != 0){
            iSum1 = iSum1 + iDigit;
        }
        
    }
    return iSum-iSum1;
}

int main(){
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}