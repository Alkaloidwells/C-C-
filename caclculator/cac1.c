#include <stdio.h>
#include <math.h>
float u, j;
char m,t;
float a, b, z;
int g;
//functions to be used in the cases
void add(int x, int y);
void sub(int x, int y);
void dive(int x, int y);
void malt(int x, int y);
int main(void)
{
    //requesting for type of calculation
printf("please chose the corresponding number\n");
printf("1_ordinary_calculation\n");
printf("2_trigonometric_calculation\n");
printf("3_invers_trig_calculation\n");
printf("enter your choice\n");
	scanf("%d",&g);
	//first switch statement to focus on the choice of the type of calculation
switch(g)
	{
case 1:
		printf("enter your operation");
		printf("+ addition");
		printf("- subtraction");
		printf("* multiplication");
		printf("/ multiplication");
		scanf("%s",t);
		//in the case of ordinary calculation this nested switch will execute based on the first
	switch(t)
		{
		case '+':
			printf("enter the numbers you which to add");
			scanf("%f%f",&a,&b);
			add(a,b);
			break;
		case '-':
			printf("enter the numbers you which to add");
			scanf("%f%f",&a,&b);
			sub(a,b);
			break;
		case '/':
			printf("enter the numbers you which to add");
			scanf("%f%f",&a,&b);
			dive(a,b);
			break;
		case '*':
			printf("enter the numbers you which to add");
			scanf("%f%f",&a,&b);
			malt(a,b);
			break;
		default:
			printf("wrong statement\n");
		}
		break;
		//end off first choose on the type of calculation the next line i choose two for the main switch
case 2:
		printf("a_sin_function\n");
		printf("b_cos_function\n");
		printf("c_tan_function\n");
		printf("d_arcsin_function\n");
		printf("e_arccos_function\n");
		printf("f_arctan_function\n");
		scanf("%c",m);
	switch(m)
	{
	  case 'a':
		 printf("enter angle\n");
		 scanf("%f",&u);
			 j = sin(u);
		 printf("sin(%f) = %f\n", u, j);
			break;
	  case 'b':
		 printf("enter angle\n");
		 scanf("%f",&u);
			 j = cos(u);
		 printf("sin(%f) = %f\n", u, j);
			break;
	  case 'c':
		 printf("enter angle\n");
		 scanf("%f",&u);
			 j = tan(u);
		 printf("sin(%f) = %f\n", u, j);
			break;
	  case 'd':
		 printf("enter angle\n");
		 scanf("%f",&u);
			 j = asin(u);
		 printf("sin(%f) = %f\n", u, j);
			break;
	  case 'e':
		 printf("enter angle\n");
		 scanf("%f",&u);
			 j = acos(u);
		 printf("sin(%f) = %f\n", u, j);
			break;
	   case 'f':
		 printf("enter angle\n");
		 scanf("%f",&u);
			 j = atan(u);
		 printf("sin(%f) = %f\n", u, j);
	      break;
	   default:
		printf("wrong entry\n");
       }

	break;
		default:
		 printf("wrong entry\n");
	}
	return 0;
	}
	// begin of function definitions
	void add(int x, int y)
	{
		int z;
		z = x+y;
		printf("%d+%d = %d\n",x, y, z);
	}
void sub(int x, int y)
	{
		int z;
		z = x-y;
		printf("%d-%d = %d\n",x, y, z);
	}
	void dive(int x, int y)
	{
		float z;
		z = x/y;
		printf("%d+%d = %f\n",x, y, z);
	}
	void malt(int x, int y)
	{
		int z;
		z = x*y;
		printf("%d+%d = %d\n",x, y, z);
	}

