#include<stdio.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
int main()
{
	struct node n1,n2,n3;
	n1.data=90;
	n2.data=78;
	n3.data=43;
	n1.next=&n2;
	n2.next=&n3;
	n3.next=NULL;
	n2.prev=&n1;
	n3.prev=&n2;
	printf("%d->",n1.data);
	printf("%d->",n1.next->data);
	printf("%d->",n1.next->next->data);
    printf("\n%d->",n3.data);
	printf("%d->",n3.prev->data);
	printf("%d->",n3.prev->prev->data);
}
