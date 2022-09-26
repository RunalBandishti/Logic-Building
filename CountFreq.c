#include<stdio.h>
#include<stdlib.h>//for malloc & free

int CountFreq(int Arr[],int iLength,int iFreqCnt){
    int iMin = Arr[0];
    int iCnt = 0;
    
    for(int j=0; j<iLength; j++){
        if(iFreqCnt == Arr[j]){
            iCnt++;
        }
    }
    return iCnt;
}

int main(){
    int *ptr = NULL,iFreq = 0,iSize= 0,iRet = 0;
    

    printf("Enter the number of elements:\n");
    scanf("%d",&iSize);

    printf("Enter the number you want to check:\n");
    scanf("%d",&iFreq);


    ptr = (int *)malloc(iSize * sizeof(int));
     
    printf("Enter elements: \n");
    for(int i=0; i<iSize; i++){
        scanf("%d",&ptr[i]);
    }

    iRet = CountFreq(ptr,iSize,iFreq);
    printf("Count is:%d",iRet);
    free(ptr);
    return 0;
}