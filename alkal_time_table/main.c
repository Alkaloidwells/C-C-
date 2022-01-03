#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define o 4
void display(char day[3]);
struct time_table
{
	char period[12];
	char sub_name[20];
}mon[o], tue[o], wed[o], thu[o],fri[o];
int main(int argc, char *argv[])
{
   int i; 
///***monday collection*************************************
 	printf("enter period and activity respectivly for monday\n");
	for(i=0;i<o;i++)
	{
		scanf("%s%s", mon[i].period, mon[i].sub_name);
	}
///***tuesday collection***********************************
	printf("enter period and activity respectivly\n");
	for(i=0;i<o;i++)
	{
		scanf("%s", tue[i].sub_name);
	}
//***collection for wednesday*****************************************
printf("enter  activity  fdor wedesday respectivly\n");
	for(i=0;i<o;i++)
	{
		scanf("%s", wed[i].sub_name);
	}
//***colllection for thuesday*****************************************
	printf("enter  activity  fdor thuesday respectivly\n");
	for(i=0; i<o; i++)
	{
		scanf("%s", thu[i].sub_name);
	}
//***colllect friday*****************************************
	for(i=0; i<o; i++)
	{
		scanf("%s", fri[i].sub_name);
	}
//***dispay for monday*******************************************
    for(i=0; i<o; i++)
	{
		printf("%8s  ", mon[i].period);
	}
	printf("\n");
//***dispay for monday*******************************************
    for(i=0; i<o; i++)
	{
		printf("%8s  ", mon[i].sub_name);
	}
	printf("\n");
//***dispay for tuesday*******************************************
   for(i=0; i<o; i++)
	{
		printf("%8s  ", tue[i].sub_name);
	}
	printf("\n");
//***dispay for wednesdayday********************************
	printf("enter activity respectivly for firday\n");
	for(i=0;i<o;i++)
	{
		printf("%8s  ", wed[i].sub_name);
	}
printf("\n");
//****dispay for thuesday****************************************************
	printf("enter activity respectivly for firday\n");
	for(i=0;i<o;i++)
	{
		printf("%8s  ", thu[i].sub_name);
	}
printf("\n");
//****dispay for friday****************************************************
	printf("enter activity respectivly for firday\n");
	for(i=0;i<o;i++)
	{
		printf("%8s  ", fri[i].sub_name);
	}
printf("\n");
//********************************************************

	return 0;
}

