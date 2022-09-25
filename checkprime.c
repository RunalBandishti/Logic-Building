#include<stdio.h>
#include<stdbool.h>

bool ChkPrime(int iNo){

    int i = 0;

    for (i=2;i<=iNo/2;i++){
        if(iNo % i == 0){
            break;
        }
    }
    if(iNo % i+1){
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
        printf("%d is a prime number.\n",iValue);
    }
    else{
        printf("%d is not a prime number.\n",iValue);
    }

    return 0;
}