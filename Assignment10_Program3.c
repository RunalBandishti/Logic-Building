#include<stdio.h>
#include<stdlib.h>

int ChkLastOcr(int Arr[],int iLength,int iMatch){
    int iCatch = 0;
    for(int i = iLength; i>=0; i--){
        if(Arr[i] == iMatch){
            iCatch = i;
            break;
        }
    }
    return iCatch;
}

int main(){
    int iSize = 0,iCnt= 0,iRet= 0,iChk=0;
    int *p = NULL;

    printf("Enter the number of elements:");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    for(iCnt = 0; iCnt < iSize; iCnt++){
        printf("Enter the %d element:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    printf("Enter the number to get index of:");
    scanf("%d",&iChk);

    iRet = ChkLastOcr(p,iSize,iChk);

    if(iRet == -1){
        printf("Number not  found");
    }
    else{
        printf("Number found at %d position",iRet);
    }

    free(p);

    return 0;
}