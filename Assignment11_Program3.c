#include<stdio.h>
#include<stdlib.h>

int ReturnDiff(int Arr[],int iLength){
    int iMax = Arr[0];
    int iMin = Arr[0];
    for(int i=0;i<iLength;i++){
        if(iMax<Arr[i]){
            iMax = Arr[i];
        }
        else if(iMin>Arr[i]){
            iMin = Arr[i];
        }
    }
    return iMax- iMin;
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

    iRet = ReturnDiff(p,iSize);

    printf("Difference is :%d",iRet);

    free(p);

    return 0;
}