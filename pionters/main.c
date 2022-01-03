#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
struct employe
{
    char name[121];
	char adress[31];
	int age;
	float salary;
}emp[1];
int main(int argc, char *argv[])
{
	emp[1] ={
			{"kumba", 45, "monday", 24000.0}
	      };
    printf("Hello, world!\n");
    return 0;
}

