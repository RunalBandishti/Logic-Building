#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ChkNumber(int Arr[],int iLength,int iMatch){
    for(int i = 0; i < iLength;i++){
        if(Arr[i] == iMatch){
            return true;
        }
        else{
            return false;
        }
    }
}

int  main(){
    int iSize = 0, iCnt = 0,iChk = 0;
    int *p = NULL;
    bool bRet = false;

    printf("Enter the number of elements:");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    for(iCnt = 0; iCnt < iSize; iCnt++){
        printf("Enter the %d element:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    
    printf("Enter the number to check:");
    scanf("%d",&iChk);


    bRet = ChkNumber(p,iSize,iChk);
    
    if(bRet == true){
        printf("TRUE");
    }
    else{
        printf("FALSE");
    }

    free(p);

    return 0;
}