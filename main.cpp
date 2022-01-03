#include <stdio.h>
int main(void)
{
int ff, cc, i=0;
	while(i<=200)
{

		ff = i;
		cc = (10.2/100)*ff;
		printf("%10d %13d \n", ff, cc);
	     i++;
}
		return 0;
}
