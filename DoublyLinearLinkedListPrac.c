#include<stdio.h>
#include<stdlib.h>

struct node {

    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head, int iNo);
void InsertAtPos(PPNODE head,int iNo, int pos);
void InsertLast(PPNODE head, int iNo);
void DeleteFirst(PPNODE head);
void DeleteAtPos(PPNODE head,int pos);
void DeleteLast(PPNODE head);
void Display(PNODE head);
int Count(PNODE head);


void InsertFirst(PPNODE head, int iNo){
    PNODE newn =NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(*head == NULL){
        *head = newn;
    }
    else{
        newn->next = *head;
        (*head)->prev = newn;
        *head = newn;
    }
}

void InsertAtPos(PPNODE head,int iNo, int pos){
    PNODE temp = NULL;
    int size = 0,iCnt=0;
    size = Count(*head);
    PNODE newn = NULL;

    if((pos < 1) || (pos > (size +1))){
        printf("Invalid position\n");
        return;
    }
    else if(pos == 1){
        InsertFirst(head,iNo);
    }
    else if(pos == (size+1)){
        InsertLast(head,iNo);
    }
    else{
        
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;

        temp = *head;

        for(iCnt =1; iCnt < (pos -1); iCnt++){
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
    }
}

void InsertLast(PPNODE head, int iNo){
    PNODE newn =NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(*head == NULL){
        *head = newn;
    }
    else{
        temp = *head;

        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;
    }
}


void DeleteFirst(PPNODE head){
    if(*head == NULL){
        return;
    }

    if((*head)->next == NULL){
        free(*head);
        *head = NULL;
    }
    else{
        *head = (*head)->next;
        free((*head)->prev);
        (*head)->prev = NULL;
    }   
}

void DeleteAtPos(PPNODE head, int pos){
    PNODE temp = NULL;

    int size = 0,iCnt=0;
    size = Count(*head);

    if((pos < 1) || (pos > size)){
        printf("Invalid position\n");
        return;
    }
    else if(pos == 1){
        DeleteFirst(head);
    }
    else if(pos == size){
        DeleteLast(head);
    }
    else{
        temp = *head;

        for(iCnt =1; iCnt < (pos -1); iCnt++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;

    }
}
void DeleteLast(PPNODE head)
{
    PNODE temp= NULL;
    if(*head == NULL){
        return;
    }

    if((*head)->next == NULL){
        free(*head);
        *head = NULL;
    }
    else{
        temp =*head;

        while(temp->next->next != NULL){
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void Display(PNODE head){
    printf("Data from linked list is:\n");

    while(head != NULL){
        printf("[ %d ]<==>",head->data);
        head = head->next;
    }
    printf("NULL \n");
}

int Count(PNODE head){
    int iCnt = 0;

    while(head != NULL){
        iCnt++;
        head = head->next;
    }
    return iCnt;
}

int main(){
    PNODE first = NULL;//creating the first student
    int iRet = 0;

    InsertFirst(&first,101);
    InsertFirst(&first,51);

    Display(first);

    iRet = Count(first);

    printf("The number of nodes in this linked list are: %d\n", iRet);

    InsertAtPos(&first,75,3);

    Display(first);

    iRet = Count(first);

    printf("The number of nodes in this linked list are: %d\n", iRet);

    InsertLast(&first,21);
    InsertLast(&first,11);

    Display(first);

    iRet = Count(first);

    printf("The number of nodes in this linked list are: %d\n", iRet);

    DeleteFirst(&first);//51
    
    Display(first);

    iRet = Count(first);

    printf("The number of nodes in this linked list are: %d\n", iRet);    

    DeleteAtPos(&first,3);  //21

    Display(first);

    iRet = Count(first);

    printf("The number of nodes in this linked list are: %d\n", iRet);

    DeleteLast(&first);     //11
    
    Display(first);

    iRet = Count(first);

    printf("The number of nodes in this linked list are: %d\n", iRet);
    
    return 0;
}