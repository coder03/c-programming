#include<stdio.h>
int main()
{
	int i=259, *ptr = &i, **dptr = &ptr;  // if *ptr = i ==> then segmentation fault
	printf("%u\t%u\t%d\t%d\t%d\t%d\t",&i,ptr,i,*ptr,*&i,*dptr==ptr);
	return 0;
}
