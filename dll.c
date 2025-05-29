#include<stdio.h>
#include <stdlib.h>
struct node{
    struct node*prev;
    int data;
    struct node*next;
}*head=NULL,*newnode,*temp=NULL,*tail=NULL;
void ins_f(int item){
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=item;
    if(head==NULL){
        head=tail=newnode;
    }
    else{
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
}
void ins_pos(int pos,int item){
    newnode=(struct node*)malloc(sizeof(struct node));
    temp=head;
    int count;
    while(temp!=null){
        temp=temp->next;
        count++;
    }
    if(pos>count||pos<0){
        printf("invalid pos");
    }
    else{
        int i=1;
        while(i<pos-1){
            temp=temp->next;
            i++;
        }
    }
}