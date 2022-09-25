#include<stdio.h>

int main(){
    int Arr[5]; //Arr is one dimensional array which holds 5 elements each element is of type integer

    printf("Enter elements:");
    scanf("%d",&Arr[0]);
    scanf("%d",&Arr[1]);
    scanf("%d",&Arr[2]);
    scanf("%d",&Arr[3]);
    scanf("%d",&Arr[4]);

    printf("Elements: ");

    printf("%d \n",Arr[0]);
    printf("%d \n",Arr[1]);
    printf("%d \n",Arr[2]);
    printf("%d \n",Arr[3]);
    printf("%d \n",Arr[4]);

    return 0;
}