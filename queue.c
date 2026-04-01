#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int q[MAX];
int F=-1,R=-1;
int enqueue(int ele)
{
	if(R==MAX-1)
	{
		printf("queue is full");
		return 0;
	}
	else
	{
		R++;
		q[R]=ele;
		if(F==-1)
		F=0;
	}
}
//deleting element
int dequeue()
{
	int ele;
	if(F==-1 || F>R)
	{
		printf("queue is empty");
		return 0;
	}
	else
	{
		ele=q[F];
		F++;
	}
}

//display
display()
{
	int i;
	printf("elements are");
	for(i=F;i<=R;i++)
	printf("%d ",q[i]);
}

int main()
{
	int ch,ele;
	while(1)
	{
		printf("\n1.enqueue\n");
		printf("2.dequeue\n");
		printf("3.display\n");
		printf("4.exit\n");
		printf("enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter element to insert\n");
				scanf("%d",&ele);
				enqueue(ele);
				break;

			case 2:
				dequeue();
				break;

			case 3:
				display();
				break;

			case 4:
				exit(0);
				break;
		}
	}
	return 0;
}

