#include<stdio.h>

typedef int bool;
#define true 1
#define false 0


bool ChkZero(int iNo){
    int iDigit = 0;

    if(iNo <0){
        iNo = -iNo;
    }

    while(iNo != 0){
        iDigit = iNo %10;
        iNo = iNo/10;

        if(iDigit == 0){
            return true;
        }
        else{
            return false;
        }
    }
}

int main(){
    int iValue = 0;
    int bRet = 0;

    printf("Enter a number:");
    scanf("%d",&iValue);

   bRet = ChkZero(iValue);

   if(bRet == true){
       printf("%d contains zero",iValue);
   }
   else{
       printf("%d conteins no zero",iValue);
   }

    return 0;

}