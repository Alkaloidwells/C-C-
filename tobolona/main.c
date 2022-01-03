#include <stdio.h>
int main(int argc, char *argv[])
{
	int d;
    printf("Enter a number between 0 to 100\n");
	scanf("%d", &d);
	 if(d>=0 && d<=49)
	{
       printf("you loss\n");
	}
	else if(d==51 || d==50)
	{
		printf("you win!!!\n");
	}
	else if(d>=52 && d<=70)
	{
       printf("you have two more chances!\nEnter a number\n");
		int d2;
		scanf("%d", &d2);
         if(d2>=0 && d2<=49)
			{
      			 printf("you loss\n");
			}
		 else if(d2==51 || d2==50)
				{
					printf("you win!!!\n");
				}
 		else if(d2>=52)
			{
       			printf("you have one more chance!\nEnter a number\n");
			  	int d3;
				scanf("%d",&d3);
					 if((d3>=0 && d3<=49)|| (d3>=52))
						{
      					 	printf("you loss\n");
						}
		 			else if(d3==51 || d3==50)
						{
							printf("you win!!!\n");
						}
			}

	}
	else if(d>=71 && d<=100)
	{
       printf("you have one more chance!\nEnter a number\n");
		int d4;
		scanf("&d",&d4);
				  if((d4>=0 && d4<=49)|| (d4>=52))
						{
      					 	printf("you loss\n");
						}
		 			else if(d4==51 || d4==50)
						{
							printf("you win!!!\n");
						}

	}
	else
    return 0;
}

