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
	s1.rno=1;
	strcpy(s1.name,"ashdres");
	//s1.name[20]="ashdres";
	//struct student s2={2,"jayfer"};
	printf("%d\n%s\n",s1.rno,s1.name);
    struct student s2;
	s2.rno=1;
	strcpy(s2.name,"jayfer");
	//s2.name[20]="jayfer";
	printf("%d\n%s\n",s2.rno,s2.name);
	return 0;
}
