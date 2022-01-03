 #include <stdio.h>
int main(int argc, char *argv[])
{
	int isbn[10];
   int x;
	int i;
	int s;
	int r;
      printf("enter\n1-to check if the check-digit is valid\n2-to check if ISBN is valid\n");
	  scanf("%d", &x);
	if(x==1){
		printf("enter 10-digt ISBN\n");
		for(i=0; i<10; i++){
			scanf("%d", &isbn[i]);
		}
		s = (isbn[0]*10)+(isbn[1]*9)+(isbn[2]*8)+(isbn[3]*7)+(isbn[4]*6)+(isbn[5]*5)+(isbn[6]*4)+(isbn[7]*3)+(isbn[8]*2)+(isbn[9]*1);
		r = s%11;
		if(r==0){
			printf("your check-digit: %d", isbn[9]);
            printf("   is valid\n");
		}
		else
			printf("your check-digit: %d ", isbn[9]);
		     printf("is not valid valid\n");
	}
   else if(x==2){
      printf("enter 10-digt ISBN\n");
		for(i=0; i<10; i++){
			scanf("%d", &isbn[i]);`
		}
		s = (isbn[0]*10)+(isbn[1]*9)+(isbn[2]*8)+(isbn[3]*7)+(isbn[4]*6)+(isbn[5]*5)+(isbn[6]*4)+(isbn[7]*3)+(isbn[8]*2)+(isbn[9]*1);
		r = s%11;
		if(r==0){
			printf("your check-digit: %d", isbn[9]);
            printf("  is valid\n");
			printf("your ISBN is valid\n");
		}
		else
			printf("your check-digit: %d", isbn[9]);
		     printf("  is not valid valid\n");
		    printf("your ISBN is not valid\n");
	}
	
    return 0;
}

