#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fp;
    char *x;
    system("cls");
    printf("\n enter file name: ");
    gets(x);
    fp=fopen(x,"r");
    if(fp==NULL)
    {
        printf("the file...%s...was not found", x);
    }
    else
    {
        printf("the file...%s...is found", x);
    }
    fclose(fp);
    getch;
}
