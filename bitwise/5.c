// function to getbits(x,p,n) that returns right adjusted n bit filed of x that begins wit posion p

void getbits(int ,int, int);
#include<stdio.h>
int main()
{
	int x, p, n;
	printf("Enter a no , position and n bits\n");
	scanf("%d%d%d",&x,&p,&n);
	getbits(x,p,n);
	return 0;	
}

void getbits(int x,int p, int n)
{
	printf("Get bits = %d",( (~(~0<<n))<<p-n+1)&x );
}
	
