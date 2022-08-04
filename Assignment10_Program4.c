#include<stdio.h>
#include<stdlib.h>

void ChkFromRange(int Arr[],int iLength,int iStart,int iEnd){
    for(int i=0;i<iLength;i++){
        if(Arr[i] >= iStart){
            if(Arr[i] <= iEnd){
                printf("%d\t",Arr[i]);
            }
            
        }
    }
    
}


int main(){
    int iSize =0,iCnt=0,iStart=0,iEnd = 0;
    int *p = NULL;

    printf("Enter the number of element");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    for(iCnt = 0; iCnt < iSize; iCnt++){
        printf("Enter the  %d element:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    printf("Enter the start of range: \n");
    scanf("%d",&iStart);

    printf("Enter the end of range: \n");
    scanf("%d",&iEnd);

    ChkFromRange(p,iSize,iStart,iEnd);

    free(p);

    return 0;


}