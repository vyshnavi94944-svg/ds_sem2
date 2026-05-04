#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
}*front,*rear;

enqueue(int ele)
{
	struct node *n;
	n=(struct node *)malloc(sizeof(struct node));
	n->data=ele;
	n->next=NULL;
	if(front==NULL)
	front=rear=n;
	else
	{
	rear->next=n;
	rear=n;
	}
}
//dequeue
dequeue()
{
	struct node *k;
	if(front==NULL)
	printf("queue is empty");
	else
	{
		k=front;
		front=front->next;
		free(k);
	}
	
}
//display
display()
{
	struct node *temp;
	temp=front;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
}

int main()
{
	int ele,ch;
	
	while(1)
	{
		printf("1.enqueue\n2.dequeue\n3.display\n4.exit\n");
		printf("enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter element to insert\n");
			       scanf("%d",&ele);
			       enqueue(ele);break;
			case 2:dequeue();break;
			case 3:display();break;
			case 4:exit(0);
		}
	}
}

	
