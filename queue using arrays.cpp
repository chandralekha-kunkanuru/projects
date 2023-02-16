#include<stdio.h>
#include<stdlib.h>
struct queue
{
 int a[5];
 int front;
 int rear;
 };
struct queue q;
void dequeue();
void enqueue();
void display();
int main()
{
  int ch;
  q.front=-1;
  q.rear=-1;
 while(1)
  {
   printf("\n1.enqueue()\n2.dequeue()\n3..display()\n4..exit(0)\n");
   scanf("%d",&ch);
   switch(ch)
   {
    case 1: enqueue();
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
 {int ele;
 scanf("%d",&ele);
 	if(q.front==-1 && q.rear==-1)
 	{
 		q.front=q.rear=0;
 		q.a[q.rear]=ele;
		}
		else
		{
			q.rear++;
			q.a[q.rear]=ele;
		}
	}
	void dequeue()
	{
		if((q.front==-1) && (q.rear==-1) || q.front>q.rear)
		{
			printf("empty");
		}
		else
		{
			printf("%3d",q.a[q.front]);
			q.front--;
		}
	}
	void display()
	{ int i;
		if((q.front==-1) && (q.rear==-1) || q.front>q.rear)
		{
			printf("empty");
		}
		else
		
		{
			for(i=q.front;i<=q.rear;i++)
			printf("%3d",q.a[i]);
		}
	}

