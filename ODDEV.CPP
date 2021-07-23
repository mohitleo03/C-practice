#include<stdio.h>
#include<conio.h>
int chk(int n)
{
if(n%2==0)
return 1;
else
return 0;
}
void main()
{
clrscr();
int n;
printf("enter the number");
scanf("%d",&n);
if(chk(n)==1)
printf("the number is even");
else
printf("the number is odd");
getch();
}