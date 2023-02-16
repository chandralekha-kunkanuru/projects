#include<stdio.h>
#include<stdlib.h>
struct stack
{
 int a[5];
 int top;
 };
struct stack s;
void push();
int pop();
int peek();
void display();
int main()
{
  int ch;
  s.top==-1;
  while(1)
  {
   printf("\n1.push()\n2.pop()\n3.peek()\n4.display()\n5.exit(0)\n");
   scanf("%d",&ch);
   switch(ch)
   {
    case 1: push();
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
 scanf("%d",ele);
 if(s.top < 4)
 {
   s.top++;
   s.a[s.top]=ele;
}
else
{
 printf("stack overflow");
 }
 }
 int pop()
 {
 int t;
  if(s.top == -1)
  {
   printf("stack underflow");
   }
   else
   {s.a[s.top]=t;
    s.top--;
    return(t);
    }
    }
   
int peek()
{
 if (s.top == -1)
 {
  printf("stack underflow");
  }
  else
  {
   return(s.a[s.top]);
   }
   }
void display()
{
  int t=s.top;
  if(s.top == -1)
  {
   printf("stack is empty");
   }
 else
 {
  while(t>=0)
  {
		printf("%d",s.a[t]);
		t--;
  }
  }
 }
