#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float prime(int a)
{
	int i;

	if (a == 2) {
		printf("prime");
		return 0;
	}
	if (a % 2 == 0) {
		printf( "this number is not a prime\n");
		return 0;
	}
	for (i = 2; i < sqrt(a); i++){
		if (a % i == 0){
			printf( "this number is not a prime\n");
			return 0;
		}
	}
	printf("number is prime \n");
}
int main(int argc, const char *argv[])
{
	int a;
	printf("Please input your number \n");
	scanf("%d", &a);
	prime (a);	
	return 0;
}
