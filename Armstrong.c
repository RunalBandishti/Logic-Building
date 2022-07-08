#include<stdio.h>
#include<stdbool.h>

bool ChkArmstrong(int iNo){

    int iCopy = iNo;
    int iMult =1,iDigit= 0;
    int iCnt=0,iProd = 0,iDigitCnt = 0;
    
    while(iNo !=0){
        iDigitCnt++;
        iNo = iNo / 10;
    }
    
    iNo = iCopy;

    while(iNo !=0){
        iMult =1;

        iDigit = iNo % 10;

        for ( iCnt=1;iCnt<=iDigitCnt;iCnt++){
            iMult = iMult * iDigit;
        }

        iProd = iProd + iMult;
        iNo = iNo / 10;
    }

    if(iProd == iCopy){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int iValue = 0;
    bool bRet;

    printf("Enter a number:");
    scanf("%d",&iValue);

    bRet = ChkArmstrong(iValue);

    if(bRet == true){
        printf("%d is a armstrong number",iValue);
    }
    else{
        printf("%d is not a armstrong number",iValue);
    }

    return 0;
}