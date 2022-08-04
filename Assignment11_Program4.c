#include<stdio.h>
#include<stdlib.h>


void  CountThree(int Arr[],int iLength){
    
    
}

int main(){
    int iSize = 0,iRet = 0,iCnt =0;
    int *p = NULL;

    printf("Enter the number of element:");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    for (iCnt =0; iCnt < iSize; iCnt++) {
        printf("Enter the %d element:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    CountThree(p,iSize);

    free(p);

    return 0;
}