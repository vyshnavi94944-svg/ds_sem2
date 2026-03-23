#include<stdio.h>
struct student
{
	int rno;
	char name[80];
};
int main()
{
	struct student s[20];
	int i;
	for(i=0;i<3;i++)
	{
	printf("enter %dstudent data\n",i);
	scanf("%d%s",&s[i].rno,s[i].name);
}
return 0;}
