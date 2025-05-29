#include<stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node*next;
}*head=NULL,*temp=NULL,*trav=NULL;


void create(){
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("enter data: ");
    scanf("%d",data); x
    newnode->next=NULL;
    if(head == NULL){
        head=newnode;
    }
    else 
    {
        head->next=NULL;
    }
}

void ins_f(){
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("enter data: ");
    scanf("%d",data);
    newnode->next=NULL;
    if(head == NULL){
        head = newnode;
    }
    else{
        head->next = NULL;
    }
}

void ins_b(){
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("enter data: ");
    scanf("%d",data);
    newnode->next=NULL;
    if(head == NULL){
        head = newnode;
        tail = newnode;
    }
    else{
        tail->next = NULL;
        tail = newnode;
    }
}

void ins_pos(){
    int pos;
    printf("Enter pos :");
    scanf("%d",&pos);
    if(pos == 0){
        ins_f();
    }
    else {
        prev=NULL;
        trav=head;
        for(int i=0;i<pos;i++){
            prev=trav;
            trav=trav->next;
        }
        
    }
}