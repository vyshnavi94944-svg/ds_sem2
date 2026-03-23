#include<stdio.h>
int main()
{
	int a[100],i,n,pos;
	printf("enter number of elements:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter position:");
	scanf("%d",&pos);
	for(i=pos-1;i<n;i++)
	{
		a[i]=a[i+1];
	}
		n=n-1;
	for(i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}
}
