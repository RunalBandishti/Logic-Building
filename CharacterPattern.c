#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0,j =0;
    char ch = '\0';

    for(i = 0; i <= iRow; i++){
        for(j=1,ch = 'a';j<=i;j++,ch++){
            printf("%c",ch);
        }
        printf("\n");
    }
}

int main(){
    int iValue=0,iValue1=0;

    printf("Enter row count: ");
    scanf("%d",&iValue);

    printf("Enter column count: ");
    scanf("%d",&iValue1);

    Display(iValue,iValue1);

    return 0;
}