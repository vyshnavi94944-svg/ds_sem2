#include<stdio.h>
struct student
{
	int rno;
	char name[50];
};
int main()
{
	//struct student s1={1,"ashdres"};
	struct student s1;
	//s1.rno=1;
	//strcpy(s1.name,"ashdres");
    printf("enter student 1 details\n");
    scanf("%d%s",&s1.rno,s1.name);
    struct student s2={2,"jayfer"};
	printf("%d\n%s\n",s1.rno,s1.name);
	printf("%d\n%s\n",s2.rno,s2.name);
	return 0;
}
