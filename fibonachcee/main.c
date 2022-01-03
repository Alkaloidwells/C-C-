#include <stdio.h>
int main(int argc, char *argv[])
{
   int cnt=0, prev, sum, n, next;
   printf("enter the number of terms in your fib\n");
   scanf("%d", &n);
	prev = 0;
	next =cnt+1;
   while(cnt<=n){
   printf("%d,", prev);
   sum = prev + next;
   prev = next;
   next = sum;
		cnt++;
	}o;
 printf("\n");
    return 0;
}
