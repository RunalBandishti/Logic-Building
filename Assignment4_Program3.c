#include<stdio.h>

void ChkFactors(int iNo){

    for(int i=1; i<=iNo; i++){
        if(iNo % i != 0){ 
            printf("%d \n",i);
        }
    }
}
    
int main(){

    int iValue = 0;

    printf("Enter the value:");
    scanf("%d",&iValue);

    ChkFactors(iValue);

    return 0;
}