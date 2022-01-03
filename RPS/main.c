#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{ /* 1 - rock
	 2 - paper
	 3 - sissors
   */
	int x = 0, y = 0, r = 0, j = 0, i = 0, u = 0, t = 0;
    printf(" enter 5 to play or -5 to excit\n");
	scanf("%d", &x);
	if(x == 5){
		printf("enter how many times you wish to play\n");
		scanf("%d", &u);
		for (t=0; t<u; t++){
		printf("Enter 1 for Rock\nEnter 2 for Paper\nEnter 3 for Sisoers\n");
		scanf("%d", &y);
			r = rand() % 3 + 1;
		if(y == 1 && r == 1){
				printf("it a tire\n");
				j = j+0;
				i = j+0;
}
      else if(y == 1 && r == 2){
				printf("your rouck beats my paper\nyou win!!!\n");
				j = j + 1;
				i = i + 0;
}
      else if(y == 1 && r == 3){
				printf("your rock breaks my sissors\nyou win!!!\n");
				j = j + 1;
				i = i + 0;
}
      else if(y == 2 && r == 1){
				printf("my rock bits your paper\nyou loss!!!\n");
				j = j + 0;
				i = i + 1;
	}
      else if(y == 2 && r == 2){
				printf("you win!!! your paper is stronger\n");
				j = j + 1;
				i = i + 0;
	}
      else if(y == 2 && r == 3){
				printf("my sissors cut your papper\nyou loss!!!\n");
				j = j + 0;
				i = i + 1;
	}
      else if(y == 3 && r == 1){
				printf("my rocks breaks your sissors\nyou loos!!!\n");
				j = j + 1;
				i = i + 0;
	}
      else if(y == 3 && r == 2){
				printf("your sissors cut my papper\nyou won \n ");
				j = j + 1;
				i = i + 0;
	}
      else if(y == 3 && r == 3){
				printf("it a tire\ No piont for us\n");
				j = j + 0;
				i = i + 0;
	}

}
     //printf("print &d\n", j);
		
}

		
    return 0;
}

