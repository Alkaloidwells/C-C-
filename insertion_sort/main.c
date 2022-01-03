#include <stdio.h>
int main()
{
  int A[100], c, x, y, n, i;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (c = 0; c < n; c++)
    scanf("%d", &A[c]);
  for (i = 1; i < n; i++)
  {
    x = A[i];
	y = i;
    
    while(y>0 && A[y-1]>x)
    {
            A[y] = A[y-1];
			y = y-1;
    }
		A[y] = x;
		printf("***************\n");
    for (c = 0; c < n; c++){
    printf("%d\n", A[c]);
			
		}
 
      A[y] = x;
  }
 
  printf("Sorted list in ascending order:\n");
 for (c = 0; c < n; c++)
    printf("%d\n", A[c]);
 
	return 0;
}
