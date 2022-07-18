//print even factor of accepted number
//if both condition satisfy then only it will print 
//Ex:i=1 and iNo=24,here the 1st condition will be satisfied but 2nd onw will be so it won't print
//Ex:i=2 and iNo=24,here the 1st condition will be satisfied and the 2nd one also will be satisfied as the result we get will be zero
#include<stdio.h>

void DisplayFactor(int iNo){
    int iAns=0;
    
    if(iNo<=0){
        iNo =-iNo;
    }

    for(int i=1; i<=iNo; i++){
        if(((iNo % i) == 0)&&((i%2) == 0)){ 
            printf("%d \n", i);
        }
    }
}


int main(){
    int iValue = 0;
    

    printf("Enter number:\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;

}