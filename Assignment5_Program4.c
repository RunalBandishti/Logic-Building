#include<stdio.h>

int ChkFour(int iNo){
    int iDigit = 0;
    int iCnt = 0;

    while(iNo !=0){
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if(iDigit == 4){
            iCnt++;
        }
    }
    return iCnt;
}

int main(){
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: ");
    scanf("%d",&iValue);

    iRet = ChkFour(iValue);

    printf("%d",iRet);

    return 0;

}