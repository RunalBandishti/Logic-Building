//i/p:7856 
//o/p:6587

#include<stdio.h>
void DisplayDigits(int iNo){
 int iDigit =0;
 int iAns=0;
    

    while(iNo !=0){
        iDigit = iNo %10;
        iNo = iNo / 10;
    }
}

int main(){
    int iValue=0;

    printf("Enter value:");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return 0;
}