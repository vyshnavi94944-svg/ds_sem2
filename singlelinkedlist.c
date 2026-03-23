#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*head;
void create();
void display();
int main()
{
	create();
	display();
	return 0;
}
void create()
{
	int choice=1;
	struct node * newnode, *prev;
	while(choice)
	{
		newnode = (struct node*)malloc(sizeof(struct node));
		printf("Enter element\n");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
if(head==NULL)
{
head = newnode;
prev = newnode;
}
else
{
	prev->next = newnode;
	prev = newnode;
}
printf("Do you want to continue 1/0\n");
scanf("%d",&choice);
}
}
void display()
{
    struct node *temp;
    temp = head;
    while(temp != NULL)
    {
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
}


