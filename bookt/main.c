#include <stdio.h>
/* function main begins program execution */
 int main(void)
{
 
 int k;
 int i;
 int j;

 for ( i = 1; i <= 5; i++ ) {
 for ( j = 1; j <= 3; j++ ) {
 for ( k = 1; k <= 4; k++ )
 printf( "*" );
 printf( "\n" );
 }
 printf( "\n" );
 }

 return 0; /* indicate program ended successfully */
 } /* end function main */

