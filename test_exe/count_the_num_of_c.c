#include <stdio.h>
int main(void)
{
    int i=0, p=0; 
	char arr[i], j[1];
	printf("enter your characters and -1 t0 exit\n");
	do	
	{
		scanf("%c", &arr[i]);
		j[1] = arr[i];
		if(arr[i] == 'c')
		{
			p = p+1;
		}
		else 
		{}

		++i;
			
	}while(j[1] != '-1');
	 	
    printf("the numbers of c in your characters is %d\n", p);
	return 0;
    
}
