#include <stdio.h>
int main(int argc, char *argv[])
{

 float w, BMI, l;
	printf("This program caculate your body mass index (BMI) giveing your mass and lenth\nIt also tells you if ypu are poting on some wight\n");
	printf("Enter your wight in kg and your lenth in m respectivly\n");
	scanf("%f%f", &w, &l);
		BMI = w/(l*l);
	printf(" Your BMI is : %f\n", BMI);
	if(BMI>20 && BMI<25){
		printf("you have a normal weight\n");
	}
	else


    return 0;
}

