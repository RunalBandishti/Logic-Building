#include<stdio.h>
#include<stdlib.h>//for malloc & free

int DisplayMin(int Arr[],int iLength){
    int iMin = Arr[0];
    
    for(int j=0; j<iLength; j++){
        if(iMin>Arr[j]){
            iMin = Arr[j];
        }
    }
    return iMin;
}

int main(){
    int *ptr = NULL;
    int iSize= 0;
    int iRet = 0;

    printf("Enter the number of elements:\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));
     
    printf("Enter elements: \n");
    for(int i=0; i<iSize; i++){
        scanf("%d",&ptr[i]);
    }

    iRet = DisplayMin(ptr,iSize);
    printf("Minimum is:%d",iRet);
    free(ptr);
    return 0;
}