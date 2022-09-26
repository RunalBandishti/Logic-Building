#include<stdio.h>
#include<stdbool.h>

int CountFactors(int iNo){
    if (iNo<=0){
        iNo = -iNo;
    }
    int iCount= 0;
    for (int i=2;i<=iNo/2;i++){
        if(iNo % i == 0){
            iCount++;
        }
    }
    return iCount;
}

bool ChkPrime(int iNo){
    int iRet = 0;
    iRet = CountFactors(iNo);
    if (iRet == 0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int iValue =0;
    bool bRet;

    printf("Enter the value:");
    scanf("%d",&iValue);

    bRet =ChkPrime(iValue);

    if (bRet == true){
        printf("%d is prime number\n",iValue);
    }
    else{
        printf("Number is not prime");
    }

    

    return 0;
}