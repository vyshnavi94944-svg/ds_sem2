#include<stdio.h>
#include<string.h>
struct dob
{
	int date;
	char month[5];
	int year;
};
struct student
{
	int rno;
	char name[40];
	struct dob d;
};
int main()
{
	struct student s1;
	s1.rno=246;
	strcpy(s1.name,"vyshu");
	s1.d.date=2;
	s1.d.year=2007;
	strcpy(s1.d.month,"oct");
	printf("%d\n%s\n",s1.rno,s1.name);
	printf("%d/%s/%d",s1.d.date,s1.d.month,s1.d.year);
	printf("\n%d",sizeof(s1));
	return 0;
}
