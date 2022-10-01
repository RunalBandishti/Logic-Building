#include "FuncDefineDCLL.h"
#include "MainDCLL.cpp"

DoublyCLL::DoublyCLL(){
    Head =NULL;
    Tail =NULL;
    iCntNode = 0;
}

void DoublyCLL:: InsertFirst(int iNo){
    PNODE newn =NULL;

    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(iCntNode == 0){
        Head = newn;
        Tail = newn;
    }
    else{
        newn->next = Head;
        Head->prev = newn;
        Head = newn;
    }
    Head->prev = Tail;
    Tail->next = Head;

    iCntNode++;
}

void DoublyCLL:: InsertLast(int iNo){
    PNODE newn =NULL;

    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(iCntNode == 0){
        Head = newn;
        Tail = newn;
    }
    else{
        Tail->next=newn;
        newn->prev=Tail;
        
        Tail=newn;
    }
    Head->prev = Tail;
    Tail->next = Head;
    iCntNode++;
}

void DoublyCLL:: InsertAtPos(int iNo,int iPos){

    if((iPos < 1) || (iPos > iCntNode+1)){
        cout<<"Invalid position";
        return;
    }
    else if(iPos == 1){
        InsertFirst(iNo);
    }
    else if(iPos > iCntNode + 1){
        InsertLast(iNo);
    }
    else{
        PNODE newn =NULL;
        PNODE temp = Head;

        newn = new NODE;

        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;

        for(int i = 1;i<iPos-1;i++){
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;

        iCntNode++; 
    }
    
}

void DoublyCLL:: DeleteFirst(){
    if(iCntNode == 0){
        return;
    }
    else if(iCntNode ==1){
        delete Head;
        Head = NULL;
        Tail = NULL;
    }
    else{
        Head = Head->next;
        delete Tail->next;
    }
    Head->prev = Tail;
    Tail->next = Head;
    
    iCntNode--;
}

 void DoublyCLL:: DeleteLast(){
    if(iCntNode == 0){
        return;
    }
    else if(iCntNode ==1){
        delete Head;
        Head = NULL;
        Tail = NULL;
    }
    else{
        Tail = Tail->prev;
        delete Head->prev;
    }
    Head->prev = Tail;
    Tail->next = Head;

    iCntNode--;
 }

void DoublyCLL:: DeleteAtPos(int iPos){
    if((iPos < 1) || (iPos > iCntNode)){
        cout<<"Invalid position";
        return;
    }
    else if(iPos == 1){
        DeleteFirst();
    }
    else if(iPos > iCntNode){
        DeleteLast();
    }
    else{
        PNODE temp =Head;

        for(int i = 1;i<iPos-1;i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;

        iCntNode--;
    }
   
}

void DoublyCLL:: Display(){
    PNODE temp=Head;

    for(int i=1;i <= iCntNode;i++){
        cout<<"["<<temp->data<<"]->";
        temp=temp->next;
    }
    cout<<endl;
}

int DoublyCLL::Count(){
    
    return iCntNode;
}

