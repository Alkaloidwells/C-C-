#include <stdio.h>
int fib(int n)
{
	int fib[n+2];
		int i;
		fib[0]=0;
		fib[1]=1;
	for(i=2; i<n; i++)
	{
		fib[i]= (2*fib[i-1])+(3*fib[i-2]);

	}
	return fib[n];
}
int main(void)
{
	int n =6;
	printf("%2d\n", fib(n));

	return 0;
}
