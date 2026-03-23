#include<stdio.h>
int main()
{
	int a[100],i,n,ele=100,pos;
	printf("enter number of elements:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter position:");
	scanf("%d",&pos);
	for(i=n;i>=pos;i--)
	{
		a[i]=a[i-1];
	}
		a[i]=ele;
		n=n+1;
	for(i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}
}

