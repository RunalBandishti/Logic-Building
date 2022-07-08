#include<stdio.h>

void Display(int *ptr){
    printf("Elements: ");

    for(int j=0; j<5; j++){
        printf("%d \n",*ptr);
        ptr++;
    }
}

int main(){
    int Arr[5]; 

    printf("Enter elements:");

    for(int i=0; i<5; i++){
        scanf("%d",&Arr[i]);
    }

    Display(Arr);

    return 0;
}