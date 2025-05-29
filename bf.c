#include<stdio.h>
#include<stdlib.h>

struct Block{
    int id;
    int allocated;
    int size;
    struct Block*next;
};
struct Process{
    int pid;
    int size;
    int allocBlock;
};
struct Block *createBlock(){
    int n;
    struct Block* head=NULL;
    struct Block* temp=NULL;
    printf("Input n:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        struct Block* newBlock=(struct Block*)malloc(sizeof(struct Block));
        newBlock->id=i+1;
        printf("Enter size: ");
        scanf("%d",&newBlock->size);
        newBlock->allocated=0;
        newBlock->next=NULL;
        if(head==NULL){
            head=temp=newBlock;
        }
        else{
            temp->next=newBlock;
            temp=newBlock;
        }
    }
    return head;
}
void worstFit(struct Block*head, struct Process processes[],int m){
    for(int i=0;i<m;i++){
        struct Block* worst=NULL;
        int max=-1;
        struct Block* temp=head;
        while(temp){
            if(temp->allocated==0 && temp->size>=processes[i].size){
                int frag=temp->size-processes[i].size;
                if(frag>max){
                    max=frag;
                    worst=temp;
                }
            }
            temp=temp->next;
        }
        if(worst!=NULL){
            worst->allocated=1;
            worst->size-=processes[i].size;
            processes[i].allocBlock=worst->id;
        }
    }
}
void display(struct Process processes[],int m,struct Block*head){
    printf("Process\t\tSize\t\tBlockNo\n");
    for(int k=0;k<m;k++){
        printf("%d\t\t%d\t\t",k+1,processes[k].size);
        if(processes[k].allocBlock!=-1){
            printf("%d",processes[k].allocBlock);
        }
        else{
            printf("Not allocated");
        }
        printf("\n");
    }
}
int main(){
    int m;
    printf("How many process: ");
    scanf("%d",&m);
    struct Process processes[m];
    for(int i=0;i<m;i++){
        printf("Enter process%d :",i+1);
        scanf("%d\t%d", &processes[i].pid, &processes[i].size);
        processes[i].allocBlock=-1;
    }
    struct Block*head=createBlock();
    worstFit(head,processes,m);
    display(processes,m,head);
}