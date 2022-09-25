//i/p:7856 
//o/p:6587

#include<stdio.h>
int DisplayDigitsCount(int iNo){

 int iDigit =0;
 int iSum =0;
    while(iNo !=0){
        iDigit = iNo %10;
        iNo= iNo /10;
        iSum = iSum + iDigit;
    }
    return iSum;
}

int main(){
    int iValue=0;
    int iRet = 0;

    printf("Enter value:");
    scanf("%d",&iValue);

    iRet = DisplayDigitsCount(iValue);

    printf("%d",iRet);

    return 0;
}