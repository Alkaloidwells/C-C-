#include <stdio.h>
int main(void)
{
  FILE *ptr = fopen("A:\program\c-p\file_ass.text",  "w");
  if(ptr==NULL)
  {
      puts("file could not be opend");
  }
  else
    {
        puts("enter acount name and balance");
        puts("enter eof to end input");
        printf("%s", "? ");
        unsigned int acount;
        char name[30];
        double balance;
        fscanf("%d%29s%lf\n", &acount, name, &balance);
        while(!feof(stdin) )
       {
            printf("%s", "? ");
            fscanf("%d%29s%lf", &acount, name, &balance);
        }
    fclose(ptr);

    }
}

