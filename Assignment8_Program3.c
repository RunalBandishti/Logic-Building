#include<stdio.h>
#include<stdlib.h>

void ChkEvenDivisible(int Arr[],int iLength){

    for (int i =0;i<iLength;i++){
        if(Arr[i] % 2 == 0){
            if(Arr[i] % 5 == 0){
                printf("%d\n",Arr[i]);
            }
        }
    }
}


int main(){
    int iSize = 0,iCnt = 0;
    int *p = NULL;

    printf("Enter the number of elements:");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    for(iCnt = 0;iCnt < iSize;iCnt++){
        printf("Enter the %d element:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    ChkEvenDivisible(p,iSize);

    free(p);

    return 0;
}