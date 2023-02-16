#include<stdio.h>
#include<stdlib.h>
typedef struct stack
{
	int data;
	struct stack *link;
}node;
node *top=NULL;
void push();
void pop();
void peek();
void display();
int main()
{
	int ch;
	while(1)
	{
		printf("\n1.push\n2.pop\n3.peek\n4.display\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:peek();
			break;
			case 4:display();
			break;
			case 5:exit(0);
		}
	}
}
void push()
{
	int ele;
	scanf("%d",&ele);
	node *p=(node *)malloc(sizeof(node));
	p->data=ele;
	p->link=top;
	top=p;
}
void pop()
{
	node *t=top;
	if(t!=NULL)
	{
		printf("%d\n",t->data);
		top=top->link;
		free(t);
	}
	else
	printf("underflow");
	}
	void peek()
	{
		if(top==NULL)
		{
			printf("empty");
		}
		else
		{
			printf("%d",top->data);
		}
	}
	void display()
	{
		node *t=top;
		if(top!=NULL)
		{
			while(t!=NULL)
			{
				printf("%3d",t->data);
				t=t->link;
			}
		}
			else
			{
				printf("empty");
			}
		
	}

