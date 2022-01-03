#include <stdio.h>
int main(int argc, char *argv[])
{
	int n, arr[10], i, j, temp=0, p;
    printf("enter the number of elements you which to sort\n");
	scanf("%d",&n);
	printf("enter your elements\n");
		for(p=0; p<n; p++)
		{
			scanf("%d",&arr[p]);
		}
	for(i=0; i<n-1; i++)
	{
		for(j=0;j<n-i-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
			    temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;			
			}
			else{}
		}
		}

 printf("your sorted list\n");
		for(p=0; p<n; p++)
		{
			printf("%d\n",arr[p]);
		}
    return 0;
}

