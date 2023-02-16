#include<stdio.h>
#include<stdbool.h>
bool isoperator(char ch)
{
	if(ch=="-"||ch=="+"||ch=="/"||ch =="%")
	return 1;
	else
	return 0;
}
void push(int x)
{
	top++;
	s.a[top]=x;
}
int pop()
{
	int t;
	t=s[top];
	top--;
	return t;
}
void perform(char ch)
{
	int x,y;
	x=pop();
	y=pop();
	switch(ch)
	{
		case '*':push(y*x);
		break;
		case '+':push(y+x);
		break;
		case '-':push(y-x);
		break;
		case '/':push(y/x);
		break;
		case '%':push(y%x);
		break;
		
	}
}
int s[30],top=-1;
int main()
{
	char po[30],c;
	int i,v;
	for(i=0;(c=po[i])!='\0',i++);
	{
		if (isoperator(c));
		 perform(c);
		 else
		 {
		 	printf("%c",c)
		 	scanf("%d",&v);
		 	push(v);
			}
	}
	printf("%d",s[top]);
}
