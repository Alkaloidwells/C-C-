#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int r, n, b, x, i = 0, j = 0;
	printf("Enter number of times you which to play\n");
	scanf("%d",&n);
	for(b=0; b<n; b++){
	srand(time(NULL));
    r = rand() % 3 + 1;
		printf("Enter your number from 1 to 10\n");
		scanf("%d",&x);
	      printf("the random number is %d", r);
	       printf("   your number is %d\n", x);	
		if(r == x){
			printf("you win this round that's a piont\n");
			i = i+1;
               printf("*****************************************\n");
		}
		else{
		printf("you loss no point\n");
		j = j+1;
		printf("****************************************\n");
		}
	}
			printf("total random score is: %d\n", j);
			printf("your total score is:  %d\n", i);
			if(j>i){
			printf("*************YOU LOSS!!************\n");
			printf("better lock next time\n");
		}
	else if(j<i){
            printf("**********YOU WINE!!**************\n");
			printf("WE LIKE YOU MORE!!\n");
	}
		

    return 0;
}

