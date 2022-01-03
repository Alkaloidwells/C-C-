#include <stdio.h>
int main(int argc, char *argv[])
{
	int ag;
   printf("Enter your age \n");
	scanf("%d", &ag); 
	if (ag == 0){
     printf("wlecome to the world\n"); 
	}
    else if (ag>=1 && ag<3){
    printf("Sorry you are not old enogh to do any think\n"); 
	}
	else if (ag <= 5){
    printf("you need a dipper\n"); 
	}
    else if (ag <= 16){
    printf("you can drive\n"); 
	}
    else if (ag <= 17){
    printf("you can see an R rated movie\n"); 
	}
    else if (ag <= 18){
    printf("you can gamble\n"); 
	}
    else if (ag <= 21){
    printf("you can vote\n"); 
	}
    else if (ag <= 25){
    printf("you can rent a car\n"); 
	}
    else if (ag >= 50){
    printf("you can retire\n"); 
	}
	else
	{
      printf("worng age\n");
	}
    return 0;
}

