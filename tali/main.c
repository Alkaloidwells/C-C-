#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int y, i, j;
	int ch[6] ={0,0,0,0,0,0};
	for(i=0; i<30;i++)
	{
   		y= rand()%6+1;
		if(y==1)
			{
				ch[0]=ch[0]+1;
			}
		else if(y==2)
			{
				ch[1]=ch[1]+1;
			}
		else if(y==3)
			{
				ch[2]=ch[2]+1;
			}
		else if(y==4)
			{
				ch[3]=ch[3]+1;
			}
		else if(y==5)
			{
				ch[4]=ch[4]+1;
			}
		else if(y==6)
			{
				ch[5]=ch[5]+1;
			}
		else {}
	}
printf("number    frequency\n");
for(j=0;j<6; j++)
	{
		printf("  %d           %d\n", (j+1), ch[j]);
	}
   
    return 0;
}


