// program to find LCM using recursion

int lcm_n1(int ,int);
#include<stdio.h>
int main()
{
	int a,b,temp,lcm;
	printf("Ener 2 no\n");
	scanf("%d%d",&a,&b);
	temp = lcm_n1(a,b);
	lcm = (a * b)/temp;
	printf("Lcm of %d, %d = %d\n",a,b,lcm);
	return 0;

}
int lcm_n1(int a,int b)
{
	int n1,n2;
	n1 = a;
	n2 = b;
	if(n1 != n2)
	{
		if(n1>n2)
			n1 = n1 - n2;
		else
			n2 = n2 - n1;
		return lcm_n1(n1,n2);
	}
	else
	{
		return n1;
	}
}
		
