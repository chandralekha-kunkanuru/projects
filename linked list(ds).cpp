#include<stdio.h>
#include<stdlib.h>
typedef struct sll
  {
  	int data;
  	struct sll*link;
		}node;
	node *head = NULL;
	void insert_front();
	void insert_end();
	void delete_front();
	void delete_end();
	void display();
	int main()
	{
		int ch; 
		while(1)
		{
		printf("1.insert_front()\2.insert_end()\n3.delete_front()\n4.delete_end()\n5.display6.exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: insert_front();
			        break;
			case 2:insert_end();
			       break;
			case 3:delete_front();
		       	break;
			case 4:delete_end();
		       	break;
			case 5:display();
			case 6:exit(0);
			default : printf("\n wrong choice");
			
			
		}}}
	void insert_front()
	{
		int ele;
		node*p = (node*)malloc(sizeof(node));
		scanf("%d",&ele);
		p->data = ele;
		p->link = head;
		head = p;
	}
	void insert_end()
	{
		int ele;
		node *t = head;
		node *p = (node*)malloc(sizeof(node));
		scanf("%d",&ele);
		p->data = ele;
		p ->link =NULL;
		if(head == NULL)
		{
			head = p;
			}
			else
			{
				while(t->link != NULL)
				t = t->link;
			}
			t -> link =p;
	}
	void delete_front()
	{
		if(head == NULL)
		{
			printf("list is empty");
		}
		else
		{
			node *t = head;
				head = head -> link;
				free(t);
			
		}
	}
	void delete_end()
	{
		node *t = head;
		node *prev;
		if(head == NULL)
		{
			printf("list is empty");
		}
		else
		{
			while(t->link != NULL)
			{
				prev = t;
				t = t->link;
			}
			prev -> link = NULL;
			free(t);
		}
	}
	void display()
	{
		 node *t = head;
		 if(head != NULL)
		while(t != NULL)
		{
			printf("%3d",t -> data);
			t = t -> link;
		}
		else
		{
			printf("link is empty");
		}
	}
	
