#include <stdio.h>
#include <math.h>
int n = 10;
int comb(int, int);
int fac(int);
int main(void)
{

    int i, j,k=0, p,u;
    for(i=0;i<n;++i)
    {
        k=0;
        for(u=1;u<=n-i;u++){
         printf(" ");
        }
       for(j=0;j<=i;j++)
       {
           if(j==0||i==0)
       			{
    			   p=1;
    			}
    		else
    			{
        			p = p*(i-j+1)/j;
    			}
           printf("%2d", p);
           ++k;
        }

        printf("\n");
}
    return 0;
}

