#include<stdio.h>
#include<conio.h>
int sq(int n)
{
return n*n;
}
void main()
{
clrscr();
int n;
printf("enter the number");
scanf("%d",&n);
printf("square is %d",sq(n));
getch();
}
