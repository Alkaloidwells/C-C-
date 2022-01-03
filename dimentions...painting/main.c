#include <stdio.h>
int main(int argc, char *argv[])
{
	int n, i, p, q;  
	float l2[20], w2[20], l[20], w1, l1, w[20], ft;
	float a1, a2=0, a3=0, totp;
 printf("this program calculates the quatity of paints needed in painting\na room giving the number of doors and windows not to be painted\n");
 printf("**********************************************************\n");
 printf("Enter lenght and width of room respectively\n");  
 scanf("%f%f",&l1, &w1);
	a1 = (l1*w1);
 printf("Input number of doors in room\n");
 scanf("%d",&i); 
	 printf("Enter lenght and width of doors respectively\n");
	for(n=1; n<=i; n++){
		scanf("%f%f",&l[i], &w[i]);
		a2 = a2 + (l[i]*w[i]);
		printf("**********************************************************\n");
	}
 printf("Input number of windows in room\n");
 scanf("%d",&q);
	 printf("Enter lenght and width of windows respectively\n");
for(p=1; p<=q; p++){
		scanf("%f%f",&l2[q], &w2[q]);
		a3 = a3 + (l2[q]*w2[q]);
		printf("**********************************************************\n");
}
		ft= a1-(a2+a3);
        totp = ft*95;
	printf("%f Liters of paint is needed paint your room\n", totp);
	printf("**********************************************************\n");
    return 0;
}

