#include<stdio.h>
#include<conio.h>
main()
{
   int bs, hra, da, ta, gs;
   clrscr();

   printf("enter base salary");
   scanf("%i" &bs);
   hra=bs*14/100;
   da =bs*9/100;
   ta =bs*10/100;
   gs=bs+hra+da+ta;
   printf("gross salary : %i",gs);
   getch();
   }







