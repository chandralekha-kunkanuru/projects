
#include<stdio.h>
#include<stdlib.h>
typedef struct queue
{
  int data;
  struct queue *link;
  int front;
  int rear;
 }node;
node *front=NULL,*rear=NULL;
void enqueue();
void dequeue();
void display();
 int main()
 {
  int  ch;
  while(1)
  {
   printf("\n1.enqueue\n2.dequeue\n3.display()\n4.exit(0)");
   scanf("%d",&ch);
   switch(ch)
   {
    case 1:enqueue();
    break;
    case 2:dequeue();
    break;
    case 3:display();
    break;
    case 4:exit(0);
    }
    }
    }
 void enqueue()
{
  int ele;
  scanf("%d",&ele);
  node *p=(node *)malloc(sizeof(node));
  p->data=ele;
  p->link=NULL;
  if(front==NULL && rear==NULL)
  {
    front=rear=p;
    }
   else
   {
     rear->link=p;
     rear=p;
     }
     }
 void dequeue()
 { node *t=front;
  if(front==NULL && rear==NULL)
  {
   printf("queue underflow");
   }
  else if(front->link==NULL)
  {
    front=rear=NULL;
    free(t);
    }
  else
  {
    front=front->link;
    free(t);
    }
    }
  void display()
  {
    node *t=front;
    if(front==NULL && rear==NULL)
    printf("queue empty");
    else
    {
    while(t!=NULL)
    {  printf("%3d",t->data);
       t=t->link;
    }
    }
    }

   
   
   
   
  
	

