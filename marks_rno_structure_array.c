   #include<stdio.h>
struct student
{
	int rno;
	int s1;
	int s2;
	int s3;
};
int main()
{
	struct student s[20];
	int i;
	for(i=1;i<=3;i++)
	{ printf("enter th student rno:");
     	scanf("%d",&s[i].rno);
		printf("enter the s1 marks:");
		scanf("%d",&s[i].s1);
		printf("enter the s2 marks:");
		scanf("%d",&s[i].s2);	
		printf("enter the s2 marks:");
		scanf("%d",&s[i].s3);
	}
	for(i=1;i<=3;i++)
	{
	printf("%d %d %d %d\n",s[i].rno,s[i].s1,s[i].s2,s[i].s3);
	}
	return 0;
}
