// illestrate num[0] = *num and *(num+i) is not equal to *num+i

#include<stdio.h>
int main()
{
	int num[] = { 24,34,12,44,56,17 };
	int i = 0;
	while(i <= 5)
	{
		printf("Adress = %u ", (int)&num[i]);
		printf("Element = %d\t %d\t %d\t %d\n", num[i], *(num + i), *num+i, i[num]);
		i++;		
	}
	return 0;
}
