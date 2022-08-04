#include<stdio.h>
#include<stdlib.h>

int GetIndex(int Arr[],int iLength,int iMatch){
    int iCatch = 0;
    for(int i=0;i<iLength;i++){
        if(Arr[i] == iMatch){
            iCatch = i;
            break;
        }
    }
    return iCatch;
}

int main(){
    int iSize = 0,iCnt = 0,iRet = 0,iChk=0;
    int *p = NULL;

    printf("Enter the number of element:");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    for(iCnt = 0; iCnt < iSize; iCnt++){
        printf("Enter the %d element:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    printf("Enter the number to get index of:");
    scanf("%d",&iChk);

    iRet = GetIndex(p,iSize,iChk);

    if(iRet == -1){
        printf("No such value found:\n");
    }
    else{
        printf("Element found at index: %d\n",iRet);
    }

    free(p);

    return 0;
}