#include<stdio.h>
#include<stdbool.h>

bool ChkPerfect(int iNo){
    int iCnt = 0;
    int iSum = 0;
    if(iNo<0){
        iNo = -iNo;
    }
        for(iCnt =1; iCnt <iNo; iCnt++){
                
            if((iNo % iCnt) == 0){
                iSum += iCnt;
            }
                if(iSum > iNo){
                    break;
                }
        }
        
    if(iSum == iNo){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int iValue = 0;
    bool iRet;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = ChkPerfect(iValue);
    if(iRet == true){
        printf("Its a Perfect Number!\n");
    }
    else{
        printf("Its not a perfect Number!\n");
    }

    return 0;
}