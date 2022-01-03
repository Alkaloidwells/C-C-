#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int av=650000000;
int a, i,tp,totint;
struct nag_cre
 {
 	int mem;
 	int am;
 	int lif;
 	int topint;
 	int netp;
 	char name[20];
 	char date[40];
 }arr[1];
int main(void)
{
     printf("enter your \nName, \nmembership, \ndate, \namount_neede,\nlife_of_loan fespectivly\n");
     for(i=0;i<1;i++)
     {
	 printf("mem %d ", i+1);
     scanf("%s%d%s%d%d", arr[i].name,&arr[i].mem,arr[i].date,&arr[i].am,&arr[i].lif);
     if((arr[i].mem==1)&&(arr[i].am < av))
		{
		arr[i].topint=1;
 	     arr[i].netp=1;
		  arr[i].topint=((0.04)*(arr[i].lif)*(arr[i].am));
          arr[i].netp = (arr[i].topint + arr[i].am);
     	  av = av-(arr[i].netp);
		}
     else if((arr[i].mem==0)&&(arr[i].am < av))
     	{
		  arr[i].topint=((0.06)*(arr[i].lif)*(arr[i].am));
     	  arr[i].netp = (arr[i].topint + arr[i].am);
     	  av = av-(arr[i].netp);
     	}
      else if(((arr[i].mem==0)||(arr[i].mem==0))&&(arr[i].am >av))
     	{
         arr[i].topint=0;
 	     arr[i].netp=0;
     	}
      else{}
	}
	printf("************************************************************************************************ \n");
	printf("name_of_chife**membersip**date**loan_amountn**life_of_loan**total_intrest_on loan**money_paind_in \n");
     for(i=0;i<1;i++) 
     {
    printf("%s  *  %d   *  %s   *   %d  *  %d     *    %d   *  %d *\n", arr[i].name, arr[i].mem, arr[i].date, arr[i].am, arr[i].lif, arr[i].topint, arr[i].netp);
     }
   printf("*************************************************************************************************\n");
	return 0;
	}
