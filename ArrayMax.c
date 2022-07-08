#include<stdio.h>
#include<stdlib.h>//for malloc & free

int DisplayMax(int Arr[],int iLength){
    int iMax = Arr[0];
    
    for(int j=0; j<iLength; j++){
        if(iMax<Arr[j]){
            iMax = Arr[j];
        }
    }
    return iMax;
}

int main(){
    int *ptr = NULL;
    int iSize= 0;
    int iRet = 0;

    printf("Enter the number of elements:\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));//sizeof(4bytes) if iSize = 4 then we allocate 16 bytes of memory
     
    printf("Enter elements: \n");
    for(int i=0; i<iSize; i++){
        scanf("%d",&ptr[i]);
    }

    iRet = DisplayMax(ptr,iSize);
    printf("Maximum is:%d",iRet);
    free(ptr);
    return 0;
}