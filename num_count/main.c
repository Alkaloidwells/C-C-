#include <stdio.h>
int main(void)
{
	int num, no;
	int sto = 0;
	printf("enter a number\n");
	scanf("%d", &num);
	no = num;
	while(num>0)
	{
        ++sto;
			num = num/10;
	}
     printf("the number of digits in %d are %d\n", no, sto);
		return 0;
}
