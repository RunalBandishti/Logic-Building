//to check vowel in entered character

#include<stdio.h>
#include<ctype.h>
void CheckVowel(char CValue) {
    char cAns ='\0';
    if (isupper(CValue)) {
        cAns= tolower(CValue);
        if (cAns== 'a'||cAns== 'e'||cAns== 'i'||cAns== 'o'||cAns== 'u'){
            printf("TRUE \n");
        }
        else{
        printf("FALSE \n");
        }
    }
    
}


int main(){
    char cValue = '\0';
    

    printf("Enter a character:\n");
    scanf("%c",&cValue);

    CheckVowel(cValue);

    return 0;

}