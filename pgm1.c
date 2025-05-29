#include <stdio.h>
#define size 5
int front=-1;
int rear=-1;
struct prio
{  int item;
   int priority;
  }pq[size];
void enqueue(int Item,int Prio)
{int i, loc;
	if (front ==0 && rear ==size-1)
		puts("OVERFLOW");
	else if (front==-1 && rear==-1)
	{
		front=0, rear=0;
		pq[rear].item = Item;
		pq[rear].priority = Prio;
		puts("Successfully enqueued item");
	}
	else if (rear== size-1)
	{	for (i = front; i<=rear; i++)
			pq[i-1] = pq[i];
		rear--, front--;
		for (i= rear; i>=front; i--) {
			if (pq[i].priority<=Prio) 
				break;		}
		loc = i+1;
		for (i = rear ; i>=loc; i--)
			pq[i+1] = pq[i];
		pq[loc].item = Item;
		pq[loc].priority =Prio;
		rear++;
	}
	else 
	{
		for (i= rear; i>=front; i--) {
			if (pq[i].priority<=Prio) 
				break;
		}
		loc = i+1;
		for (i = rear ; i>=loc; i--)
			pq[i+1] = pq[i];
		pq[loc].item = Item;
		pq[loc].priority = Prio;
		rear++;
	}
	for (i = front; i<=rear; i++)
		printf("%d(%d)\t",pq[i].item, pq[i].priority);
	printf("\n");
   
   }
void dequeue()
{int Item,Pr;
    if(front==-1&&rear==-1)
       printf("\nUnderflow");
    else if(front==rear)
      {Item=pq[front].item;
       Pr=pq[front].priority;
       front=-1;
       rear=-1;
       printf("\n Dequeued item amd priority is %d and %d",Item,Pr);
      }
    else
     {Item=pq[front].item;
      Pr=pq[front].priority;
      front++;
      printf("\n Dequeued item amd priority is %d and %d",Item,Pr);
      }
      printf("\n");
}
int main()
{int ch;
int item,priority;
do{
printf("MENU\n1.Enqueue\n2.Dequeue\n3.Exit\n");
printf("Enter choice:");
scanf("%d",&ch);
switch(ch)
{ case 1:
	{printf("Enter the item to enqueue\t");
	scanf("%d", &item);
	printf("Enter its priority\t");
	scanf("%d",&priority);
        enqueue(item, priority);
	break;}
  case 2:
     dequeue();
     break;
  case 3:
     printf("Exiting....");
     return 0;
  default:
     printf("Invalid choice");
     break;
 } 
}while(1);
return 0;
}     
   


    
