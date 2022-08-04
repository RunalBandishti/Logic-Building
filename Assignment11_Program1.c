#include<stdio.h>
#include<stdlib.h>

int ChkMax(int Arr[],int iLength){
    int iMax = Arr[0];

    for(int i = 0;i <iLength;i++){
        if(iMax<Arr[i]){
            iMax = Arr[i];
        }
    }
    return iMax;
}

int main(){

    int iSize = 0,iRet=0,iCnt =0;
    int *p= NULL;

    printf("Enter the number of element:");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    for(int i=0; i<iSize; i++){
        printf("Enter the %d element:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = ChkMax(p,iSize);

    printf("Max is %d",iRet);

    free(p);

    return 0;

}