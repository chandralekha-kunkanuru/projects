#include<stdio.h>
#include<stdbool.h>
void push(char);
char pop();
bool isoperator(char);
int pre(char);
char po[30],in[30],s[30];
int pre(char ch)
{
	if(ch=="*"||ch=="/"||ch=="%")
	return 2;
	else
	return 1;
}
bool isoperator(char ch)
{
	if(ch=="-"||ch=="+"||ch=="/"||ch =="%")
	return 1;
	else
	return 0;
}
void push(char ch){
	top++;
	s[top]=ch;
	
}
char pop()
{
	char t=s[top];
	top--;
	return t;
}
int main()
{
	int i;
	char c;
	int m=0;
	printf("enter infix");
	gets(in);
	for(i=0;(c=in[i])!='\0';i++)
	{
		if (isoperator(c))
		{
			if(s[top]=='(')
			push(c);
			else if(top!=-1)
			{
				while(prec(s[top])>prec(c) && top!=-1)
				{
					po[m]=pop();
					m++;
				}
				push(c);
			}
			else
			push(c)
		}
		else
		{
			if(c=='(')
			push(c);
			else if(c==')')
			{
				while(s[top]!='(')
				{
					po[m]=pop();
					m++;
				}
				top--;
			}
				else
				{
					po[m]=c;
					m++;
				}
			}
		}
		for(i=top;i>=0;i++)
		{
			po[m]=s[i];
			m++;
		}
		po[m]='\0';
		printf("postfix");
		puts(po);
	}
	
	

