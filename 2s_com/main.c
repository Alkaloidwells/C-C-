#include <stdio.h>
int main(void)
{
	int s =4;
    int  i, j, k, num,po;
	char brr[s], twc[s];
    printf("enter  binary integr\n");
    scanf("%d", &num);
	po=num;
	while(po>0)
	{
        ++s;
			po = po/10;
	}
	s = s-4;
    sprintf(brr, "%d", num);
  for(k=0; k<s; k++)
	{
		twc[k]= '0';
	}
	i = s-1;
  while((brr[i]!= '1')&& i>=0)
	{
		twc[i]= '0';
		--i;
	}
   twc[i]= '1'; 

  for(j=i-1; j>=0; j--)
	{
      if(brr[j]=='0')
		{
            twc[j]= '1';
		}
		else
		{
			twc[j]= '0';
		}

	}

  for(k=0; k<s; k++)
	{
		printf("%c", twc[k]);
	}
	printf("\n");
	return 0;
}

