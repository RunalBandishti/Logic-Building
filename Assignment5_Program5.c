#include<stdio.h>

int CountTwo(int iNo){
    int iDigit = 0;
    int iCnt = 0;

    if(iNo <0){
        iNo = -iNo;
    }

    while(iNo != 0){
        iDigit = iNo %10;
        iNo = iNo/10;

        if(iDigit <6){
            iCnt++;
        }
    }
    return iCnt;
}

int main(){
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number:");
    scanf("%d",&iValue);

   iRet = CountTwo(iValue);

   printf("%d",iRet);


    return 0;

}