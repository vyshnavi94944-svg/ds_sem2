#include<stdio.h>
#define MAX 10
int S[MAX];
int top=-1;
push()
{
	int ele;
	if(top==MAX-1)
	{
		
		printf("stack is full");
	          }
	else
	{
	printf("enter element ");
	scanf("%d",&ele);
	top++;
	S[top]=ele;
}
}
//display
display()
{
	int i;
	printf("elements are");
	for(i=top;i>=0;i--)
	printf("%d\n",S[i]);
}
//pop
pop()
{
	int ele;
	if(top==-1)
	{
		printf("stack is empty");

	}
	else
	{
	ele=S[top];
	top--;
}
}
int main()
{
	push();
	push();
	push();
	push();
	display();
	pop();
	pop();
	display();
	return 0;
}

