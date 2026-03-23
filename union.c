#include<stdio.h>
union data
{
	int i;
	float s;
};
int main()
{
	union data d;
	d.i=60;
	printf("%d",d.i);
	d.s=80.5;
	printf("\n%f",d.s);
    printf("\n%d",d.i);
	return 0;
}
