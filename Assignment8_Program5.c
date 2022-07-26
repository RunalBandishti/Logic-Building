#include<stdio.h>
#include<stdlib.h>

void ChkMultiple(int Arr[],int iLength){

    int iAns = 0;

    for(int i = 0;i<iLength;i++){
        if(Arr[i] % 11 == 0){
            printf("%d ",Arr[i]);
        }
    }
}


int main(){
    int iSize = 0,iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements:");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    for(iCnt = 0;iCnt<iSize;iCnt++){
        printf("Enter the %d element:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    ChkMultiple(p,iSize);

    free(p);

    return 0;
}