#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>

int main(){

    char Fname[20];
    char Data[100];
    int iRet = 0;
    int fd = 0; //file descriptor

    printf("Enter filename to create:");
    scanf("%s",Fname);

    printf("Enter the data that you want to write \n");
    scanf(" %[^'\n']s",Data);

    fd = creat(Fname,0777);
    if(fd == -1){
        printf("Failed to create file\n");
        return -1;
    }
    
    printf("File is successfully created FD %d \n",fd);
    
    iRet = write(fd,Data,strlen(Data));
    printf("%d bytes successfully written in the file \n",iRet);

    

    return 0;
}