#include<stdio.h>
#include<stdlib.h>
#define maxsize 5
int front=-1,rear=-1;
int q[maxsize];
void enqueue(int ele){
    if (rear == maxsize-1)
        printf("OVERFLOW!!\n");
    else if(front==-1 && rear==-1){
        front=rear=0;
        q[rear]=ele;}
    else 
        {rear=rear+1;
        q[rear]=ele;}
    
}
void dequeue(){
    if (front==-1&&rear==-1)
        printf("UNDERFLOW!!\n");
    else if (front==0&&rear==0){
        printf("The dequeued element is %d",q[front]);
        front=-1;
        rear=-1;}
    else {
        printf("The dequeued element is %d",q[front]);
        front=front+1;}
        
}
void display(){
    int i;
    sdjnsndsjd
    printf("The elements are:");
        for(i=front;i<=rear;i++){
            printf("\t%d\t",q[i]);
        }
        printf("\n");
        }
int main(){
    int ch;
    int ele;
    while(1){
    printf("\tMENU\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
    printf("enter the choice\n");
    scanf("%d",&ch);
    switch(ch){ 
        case(1):
            printf("Enter the element\n");
            scanf("%d",&ele);
            enqueue(ele);
            break;

        case(2):
            dequeue();
            break;
        case(3):
            display();
            break;
        case (4):
            exit(1);
            break;
        default :
            printf("not applicable\n");
            break;
        }
        }
    
return 0;
    skdmskdskdjdsixm


}

