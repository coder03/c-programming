#include<stdio.h>
int main()
{
	union example
	{
		char a[sizeof(short)];
		short int b;
	};
	union example u;
	printf("size of union = %d",sizeof(u));
	return 0;
}
