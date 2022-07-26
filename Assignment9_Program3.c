#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ChkEleven(int Arr[],int iLength){
    for(int i = 0;i<iLength;i++){
        if(Arr[i]== 11){
            return true;
        }
        else{
            return false;
        }
    }
}


int main(){
    int iSize = 0,iCnt = 0;
    int *p = NULL;
    bool bRet;

    printf("Enter the number of elements:");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    for(iCnt= 0; iCnt<iSize; iCnt++){
        printf("Enter the %d element:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    bRet = ChkEleven(p,iSize);

    if(bRet == true){
        printf("11 is present\n");
    }
    else{
        printf("11 is not present\n");
    }
    free(p);

    return 0;
}