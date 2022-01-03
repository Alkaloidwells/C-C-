#include <stdio.h>
#include <math.h>
# define PI 3.142
int fact(int);
int main(int argc, char *argv[])
{    int n=3, i, q;
	float x;
	double sinx = 0, y; 
    printf("enter a number in which you want to find the sin angel\n");
	scanf("%f", &x);
	 x = (x/180)*PI;
	for(i=0; i<n; i++)
	{ 
		q  = pow(-1, n);
		sinx = sinx + (pow(x, (((2*i)+1)))/(fact((2*i)+1)))*q;
		printf("%d\n", q);
	}
	y = sin(x);
	printf("%f\n", sinx);
	printf("%f\n", y);
	y = pow(x, ((2*i)-1));
		printf("%f\n", y);
    return 0;
}
int fact(int n)
{
    int i, po=1;
		if(n==0||n==1)
	{
       return  po;
	}
		else
	{
			for(i=n; i>0; i--)
		
			{
				po = po*n;
			}
			return po;
	}

}

