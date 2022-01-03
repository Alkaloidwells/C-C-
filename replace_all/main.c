#include <stdio.h>
int main(void)
{
 int ol, nw, i, j;
 int arr[7]= {12,0,8,10,6,7,45};
 printf("eneter a the number you which to replace and the number you wich to replace with\n");
 scanf("%d%d", &ol,&nw);
printf("old list\n");
for(j=0;j<7;j++)
	{
		printf("%d\n",arr[j]);
	}
  for(i=0;i<7;i++)
	{
			arr[i]=nw;
			
	} 
	printf("new list\n");
	for(i=0;i<7;i++)
	{
		printf("%d\n",arr[i]);
	}
  return 0;
}

