#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float prime(int a)
{
	int i;
	for (i = 2; i < (a); i++){
		if (i%a == 0)
			printf( "this number is not a prime\n");
		if (i%a != 0)
			printf("number is prime \n");
			break;
	}return 0;
}
int main(int argc, const char *argv[])
{
	int a;
	printf("Please input your number \n");
	scanf("%d", &a);
	prime (a);	
	return 0;
}
