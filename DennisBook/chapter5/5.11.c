#include<stdio.h>
#include<math.h>

#define MAXOP 100
#define NUMBER '0'

int getop(char []);
void ungets(char []);
void push(double);
double pop(void);

int main( int argc, char *argv[])
{
	char s[MAXOP];
	double op2;
	
	while(--argc > 0)
		ungets(" ");
		
