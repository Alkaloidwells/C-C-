#include <stdio.h>
char *malloc(char);
int main(void)
{
	
	int y, ptr;
	ptr = malloc(1);
 y=sizeof(int);
 printf("%d", ptr);
	return 0;
}
