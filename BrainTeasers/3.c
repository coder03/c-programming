// void (*fptr)()

// program to find string length

void str();
#include<stdio.h>
#include<string.h>
int main()
{
	void (*pt) ();
	pt = str;
	pt();
	return 0;
}

void str()
{
	char s[100];
	int n;
	printf("Enter the string\n");
	scanf("%s",s);
	n = strlen(s);
	printf("Length of srting %s is %d\n",s,n);
}
	
