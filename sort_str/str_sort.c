#include <stdio.h>
#include <string.h>
int main(void)
{
	int i,j, r;
	char str[3][6], temp[6];
	printf("enter 2 strings\n");
	for(i=0; i<2; i++)
	{
		gets(str[i]);
	}
	for(i=0; i<2; i++)
        {
            for(j=i+1; j<2; j++)
            {

	r = strcmp(str[i], str[j]);
	if(r>0)
    {
        strcpy(temp, str[i]);
        strcpy(str[i], str[j]);
        strcpy(str[j], temp);
    }
    }
        }
        printf("\n you strings sorted \n");
        for(i=0; i<2; i++)
	{
		puts(str[i]);
	}
	return 0;
}
