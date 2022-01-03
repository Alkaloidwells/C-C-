#include <stdio.h>
#include<string.h>
int av=650000000;
int a, i,j,tp,intre,totint;
void stuct();
void set_av(int a);
int get_av();
int main(void)
{
	for(i=0;i<5; i++)
	 {
   		stuct();
		av = get_av(av);
	 }
	return 0;
	}
void stuct(void)
{
	struct nag_cre
 {
 	int mem;
 	int am;
 	int lif;
 	int topint;
 	int netp;
 	char name[20];
 	char date[40];
 };
	char yu[20], yo[20];
     struct nag_cre arr;
     printf("enter your name\n");
     gets(yu);
	 strcpy(arr.name, yu);
	 printf("enter your date\n");
     gets(yo);
     printf("enter your membership\n");
     scanf("%d", &arr.mem);
	 strcpy( arr.date, yo);
     printf("enter your amount needed\n");
     scanf("%d", &arr.am);
     printf("enter your lfe of loan\n");
     scanf("%d",&arr.lif);
     if(arr.am <= av)
     {
     	if(arr.mem==1)
     	{
     		intre=((0.04)*(arr.lif)*(arr.am));
     	}
     	else
     	{
     		intre=((0.06)*(arr.lif)*(arr.am));
     	}
     arr.netp = (arr.am-intre);
     	av = av-(arr.am-intre);
		set_av(av);
     }
     else if(arr.am > av)
     {
     	printf("amount not avable\n");
     }
	printf("name    mem   date       loan       li_loan           intrest               netpay\n");
    printf("%s %4d %8s %15d %15.5d %16d %16.5d\n", arr.name, arr.mem, arr.date, arr.am, arr.lif, arr.topint, arr.netp);
}
void set_av(int a)
	{
		a = av;
		}
int get_av(void)	
	{
		return a;
		}


