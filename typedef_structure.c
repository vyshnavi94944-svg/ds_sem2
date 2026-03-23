#include<stdio.h>
#include<string.h>
typedef struct students
{
	char name[50];
	char branch[50];
	int ID_no;
}stu;
int main()
{
	stu s;
	strcpy(s.name,"Aditya");
	strcpy(s.branch,"CSE");
	s.ID_no=108;
	printf("%s\n",s.name);
	printf("%s\n",s.branch);
	printf("%d",s.ID_no);
	return 0;
}
