// int (*fptr)();
//Program to sub 2 no

int fptr();
#include<stdio.h>
int main()
{
	int (*pt)();
	int sub;
	pt = fptr;
	sub = pt();
	printf("difference of two number is %d\n",sub);
}

int fptr()
{
	int a,b,sub;
	printf("Enter no to sub\n");
	scanf("%d%d",&a,&b);
	sub = a-b;
	return sub;
}
