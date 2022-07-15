//accept 2 numbers  from user and display first number in second number of times
#include <stdio.h>

void Display(int iNo,int iFrequency){

    for (int i = 0; i < iFrequency; i++){
        printf("%d \n",iNo);
        
    }
}

int main(){
    int iValue = 0;
    int iCount = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    printf("Enter Frequency: \n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}