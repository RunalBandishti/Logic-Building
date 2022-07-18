#include<stdio.h>

void ChkFactors(int iNo){
    int iSum = 0;

    for(int i=1; i<iNo; i++){
        if(iNo % i != 0){ 
            iSum += i;
        }
        
    }
    printf("%d \n",iSum);
}
    
int main(){

    int iValue = 0;

    printf("Enter the value:");
    scanf("%d",&iValue);

    ChkFactors(iValue);

    return 0;
}