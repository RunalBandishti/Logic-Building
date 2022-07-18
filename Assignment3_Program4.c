//change the case of the alphabet
#include<stdio.h>

char ChangeCase(char CValue) {
    if (CValue>='A' && CValue<='Z') {
        CValue +=32;

        return CValue;
    }
    
}


int main(){
    char cValue = '\0';
    char cRet ='\0';

    printf("Enter a character:\n");
    scanf("%c",&cValue);

    cRet =ChangeCase(cValue);

    printf("%c",cRet);

    return 0;

}