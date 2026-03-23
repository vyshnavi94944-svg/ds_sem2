#include<stdio.h>
struct student
{
	int rno;
	char name[50];
};
int main()
{
	struct student s1={1,"ashdres"};
	printf("%d %s",s1.rno,s1.name);
	struct student s2={2,"jayfer"};
	printf("\n%d %s",s2.rno,s2.name);
	return 0;
}
