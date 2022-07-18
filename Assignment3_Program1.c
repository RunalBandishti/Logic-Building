//print even numbers n number of times
#include<stdio.h>

void PrintEven(int iNo){
    int iAns=0;

    if(iNo<=0){
        return;
    }

    for(int i=1; i<=iNo; i++){
        iAns = 2*i;
        printf("%d \n",iAns);
    }
}


int main(){
    int iValue = 0;
    

    printf("Enter number:\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;

}