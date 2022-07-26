#include<stdio.h>
#include<stdlib.h>

int ChkDifferenceFreq(int Arr[],int iLength){
    int EvFreq = 0;
    int OdFreq = 0;

    for(int i = 0;i<iLength;i++){
        if(Arr[i] % 2 ==0){
            EvFreq++;
        }
        else{
            OdFreq++;
        }
    }
    return EvFreq - OdFreq;
}

int main(){
    int iSize= 0,iRet = 0,iCnt= 0;
    int *p = NULL;

    printf("Enter the number of element:");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

    for(iCnt = 0;iCnt < iSize;iCnt++){
        printf("Enter the %d element:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = ChkDifferenceFreq(p,iSize);

    printf("Difference is:%d",iRet);

    free(p);

    return 0;
}