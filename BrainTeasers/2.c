//int (*fptr)(int *,int *)
int add(int *,int *);
#include<stdio.h>
int main()
{
	int mul,a1,a2;
	int (*pt)(int *,int *);
	printf("Enter 2 no to multiply\n");
	scanf("%d%d",&a1,&a2);	
	pt = add;
	mul = pt(&a1,&a2);
	printf("Product of %d and %d = %d\n",a1,a2,mul);
	return 0;
	
}

int add (int *b1,int *b2)
{
	int mul;
	mul = (*b1) * (*b2);
	return mul;
}
