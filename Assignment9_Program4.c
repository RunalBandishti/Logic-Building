#include<stdio.h>
#include<stdlib.h>

int GetElevenCnt(int Arr[],int iLength){
    int iCnt = 0;
    for(int i = 0; i < iLength; i++){
        
        if(Arr[i] == 11){
            iCnt++;
        }
    }
    return iCnt;
}

int main(){
    int iSize = 0,iCnt = 0,iRet= 0;
    int *p = NULL;

    printf("Enter the number of element:");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    for(iCnt = 0; iCnt < iSize; iCnt++){
        printf("Enter the %d element:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = GetElevenCnt(p,iSize);

    printf("%d",iRet);

    free(p);

    return 0;
}