#include<stdio.h>
#include<stdlib.h>

void ChkEvenOdd(int Arr[],int iLength){
    int iCnt = 0;
    for(int j = 0; j<iLength; j++){
        if(Arr[j] % 2 == 0){
            printf("%d is even number \n",Arr[j]);
            iCnt++;
        }   
    }
    printf("There are %d even numbers \n",iCnt);
}

int main(){
    int *ptr = NULL;
    int iSize= 0;

    printf("Enter number of elements:");
    scanf("%d", &iSize);

    ptr =(int *) malloc(iSize * sizeof(int));

    printf("Enter the elements:");
    for(int i=0; i<iSize; i++){
        scanf("%d", &ptr[i]);
    }

    ChkEvenOdd(ptr, iSize);
    free(ptr);
    return 0;
}