#include <stdio.h>
int main(int argc, char *argv[])
{
	float cs, ra, rs;
	printf("ENTER YOUR ANULE SALARY AND YOUR RATINING RESPECTIVLY\nYOUR RATING SHOULD BE BETWEEN 1 AND 3 INCLUSIVE \n");
	scanf("%f%f", &cs, &ra);
	if (ra == 1){
		printf("EXCELENT RATING\n");
        rs = (6*cs)/100.0;
		printf("the amount of your raise is: %.1fFCFA\n", rs);
		printf("your new salary is: %.1fFCFA\n", rs+cs);
	}
   else if(ra == 2){
		printf("GOOD RATING\n");
        rs = (4*cs)/100.0;
		printf("the amount of your raise is: %.1fFCFA\n", rs);
		printf("your new salary is: %.1fFCFA\n", rs+cs);
	}
 else if(ra == 3){
		printf("POOR RATING\n");
        rs = (1.5*cs)/100.0;
		printf("the amount of your raise is: %.1fFCFA\n", rs);
		printf("your new salary is: %.1fFCFA\n", rs+cs);
	}
	else
	{
		printf("INVALID RATING\n");
	}
    return 0;
}

