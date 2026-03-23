#include<stdio.h>
void display(int,int);
struct student
{
	int rno;
	int marks;
};
int main()
{
struct student s1;
s1.rno=1;
s1.marks=450;
display(s1.rno,s1.marks);
return 0;
}
void display(int rno,int marks)
{
	printf("%d\n%d",rno,marks);
}



