#include <stdio.h>
#include <math.h>
int e; 
float a, b;
double z;
char n[1], s[4];
void add(float x, float y);
void sub(float x, float y);
void dive(float x, float y);
void mult(float x, float y);
void quad(void);
int main(void)
{
	printf("make a choise\n");
	base:
	printf("1_ordinary caculations\n");
	printf("2_trgonometric caculations\n");
	printf("3_quadratic caculations\n");
	printf("0_Eixit\n");
	scanf("%d",&e);
if(e==1)
	{
      	printf("enter your eprtion in this from a+d\n");
	  	scanf(" %f   %c   %f", &a, n,  &b);
		if(n[0]== '+')
			{
				add(a,b);
			    goto base;
			}
		else if(n[0]== '-')
			{
				sub(a,b);
				goto base;	
			}
		else if(n[0]== '/')
			{
				dive(a,b);
				goto base;	
			}
		else if(n[0]== '*')
			{
				mult(a,b);
				goto base;	
			}
		else{}
	}
else if(e==2)
	{
		printf("enter the trig and it angle in this from sin 45\n");
		printf("for invers add a behind the t trig and it angle \nin this from asin 0\n");
	  	scanf("%s %f", s,  &b);
		if(s[0]=='s')
			{
				z= sin(b);
				printf("sin(%0.1f) = %0.2f\n", b, z );
				goto base;
			}
		else if(s[0]=='c')
			{
				z= cos(b);
				printf("cos(%0.1f) = %0.2f\n", b, z );
				goto base;
			}
		else if(s[0]=='t')
			{
				z= tan(b);
				printf("tan(%0.1f) = %0.2f\n", b, z );
				goto base;
			}
		else if((s[0]=='a')&&(s[1]=='s'))
			{
				z= asin(b);
				printf("arcsin(%0.1f) = %0.1f\n", b, z );
				goto base;
			}
		else if((s[0]=='a')&&(s[1]=='c'))
			{
				z= acos(b);
				printf("arccos(%0.1f) = %0.1f\n", b, z );
				goto base;
			}
		else if((s[0]=='a')&&(s[1]=='t'))
			{
				z= atan(b);
				printf("atctan(%0.1f) = %0.1f\n", b, z );
				goto base;
			}
	}
else if(e==3)
		{
				quad();
		}
else if(e==0)
		{
				goto end;
		}
		end:
	return 0;
}
void add(float x, float y)
{
	float z;
	z = x+y;
	printf("%0.1f + %0.1f = %0.1f\n", x, y, z );
}
void sub(float x, float y)
{
	float z;
	z = x-y;
	printf("%0.1f - %0.1f = %0.1f\n", x, y, z );
}
void dive(float x, float y)
{
	float z;
	z = x/y;
	printf("%0.1f / %0.1f = %0.1f\n", x, y, z );
}
void mult(float x, float y)
{
	float z;
	z = x*y;
	printf("%0.1f * %0.1f = %0.1f\n", x, y, z );
}
void quad(void)
{

}

