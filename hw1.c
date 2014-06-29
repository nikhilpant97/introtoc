#include<stdio.h>
#include<stdlib.h>

int fib ( int n)
{
	if (n < 2)
		return n;
	else 
		return fib(n - 1) + fib(n - 2);
}


int main(int argc, const char *argv[])
{	
	int n;
	int z;
	printf("0\n");
	printf("1\n");
	for (n = 2; n < 41; n ++)
		printf("%d \n", fib(n));
	return 0;
}
