#include<conio.h>
#include<stdio.h>
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
printf("square of the number is %d",sq(n));
getch();
}