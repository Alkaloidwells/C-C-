#include <stdio.h>
int main(void)
{
	long long decimal,tempDecimal,binary;
	int rem,place=1;

	binary=0;

	printf("enter any decimal number:");
	scanf("%lld", &decimal);
	tempDecimal=decimal;
	while(tempDecimal>0)
	{
		rem=tempDecimal%2;
		binary=(rem*place)+binary;
		tempDecimal/=2;


		place *=10;


	}
	printf("decimalnumber=%lld\n",decimal);
	printf("binary number=%lld",binary);
	return 0;
}
