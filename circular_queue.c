#include <stdio.h>
#include <stdlib.h>
#define MAX 4
int q[MAX];
int f=-1,r=-1;
int isfull()
{
	if(f==r+1 || (f==0 && r==MAX-1))
	return 1;
	return 0;
}
int isempty()
{
	if(f==-1)
	return 1;
	return 0;
}
int enqueue(int ele)
{
	if(isfull())
	printf("overflow");
	else
	{
	if(f==-1)
	{
		f=0;
	}
	r=(r+1)%MAX;
	q[r]=ele;
    }
    
	
}

//deleting element
int dequeue()
{
	int ele;
	if(isempty())
	printf("under flow");
	else
	{
		ele=q[f];
		if(f==r)
		{
			f=-1;
			r=-1;
		}
		else
		f=(f+1)%MAX;
	}
}

//display
void display() {
    int i;

    if (isempty()) {
        printf("Queue is empty\n");
        return;
    }

    printf("Elements are: ");

    for (i = f; ; i = (i + 1) % MAX) {
        printf("%d ", q[i]);
        if (i == r)
            break;
    }

    printf("\n");
}

int main()
{
	int ch,ele;
	while(1)
	{
		printf("1.enqueue\n");
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
			case 2:dequeue();break;
			case 3:display();break;
			case 4:exit(0);break;
		}
	}
	return 0;
	}
