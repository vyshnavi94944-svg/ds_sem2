#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*top;
//inserting element
void push(int ele)
{
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=ele;
	newnode->next=NULL;
	if(top==NULL)
	top=newnode;
	else
	{
		newnode->next=top;
		top=newnode;
	}
}
//deleting element
int pop()
{
	struct node *temp;
	if(top==NULL)
	printf("stack is empty\n");
	else
	{
		temp=top;
		top=top->next;
		free(temp);
	}
}

display()
{
	struct node *temp;
	temp=top;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
}
int main()
{
	int ele,ch;
	while(1)
	{
		printf("1.push\n2.pop\n3.display\n4.exit\n");
		printf("enter your choice");
		scanf("%d",&ch);
		switch(ch)
        {
        	case 1:printf("enter elements to insert \n");
        	       scanf("%d",&ele);
        	       push(ele);break;
            case 2:pop();break;
			case 3:display();break;
			case 4:exit(0);        
		}		
	}
}
