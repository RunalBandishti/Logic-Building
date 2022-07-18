#include<stdio.h>

void ChkFactors(int iNo){
    int iCnt = 1;

    for(int i=1; i<iNo; i++){
        if(iNo % i == 0){
           iCnt *= i;
           
        }
    }
    printf("%d \n",iCnt);
}


int main(){

    int iValue = 0;

    printf("Enter the value:");
    scanf("%d",&iValue);

    ChkFactors(iValue);

    return 0;
}