#include<stdio.h>

int ChkFactors(int iNo){
    int iSum = 0;
    int iSum1 = 0;

    for(int i=1; i<iNo; i++){
        if(iNo % i == 0){ 
            iSum += i;
        }
        else if(iNo % i != 0){
            iSum1 += i;
        }
        
    }
    
    return iSum-iSum1;
}

    
int main(){

    int iValue = 0;
    int iRet = 0;
    

    printf("Enter the value:");
    scanf("%d",&iValue);

    iRet=ChkFactors(iValue);

    printf("%d",iRet);

    return 0;
}