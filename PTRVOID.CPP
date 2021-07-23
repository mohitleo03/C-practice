#include<stdio.h>
#include<conio.h>
void main ()
{
int i=5;
clrscr();
void *vptr;
vptr=&i;
printf("\n value of i = %d",*(int *)vptr);
getch();
}