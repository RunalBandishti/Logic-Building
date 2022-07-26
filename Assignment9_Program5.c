#include<stdio.h>
#include<stdlib.h>

int ChkUserCnt(int Arr[],int iLength,int iMatch){
    int iCnt = 0;
    for (int i = 0; i < iLength;i++){
        if (Arr[i] == iMatch){
            iCnt++;
        }
    }
    return iCnt;
}

int main(){
    int iSize= 0,iRet=0,iCnt=0,iChk = 0;
    int *p = NULL;

    printf("Enter the number of elements:");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    for(iCnt = 0; iCnt <iSize; iCnt++){
        printf("Enter the %d element:",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    printf("Enter the number to get count of: ");
    scanf("%d",&iChk);

    iRet = ChkUserCnt(p,iSize,iChk);

    printf("%d",iRet);

    free(p);

    return 0;

}