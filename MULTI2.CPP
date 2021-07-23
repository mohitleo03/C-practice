#include<stdio.h><
#include<conio.h>
void mul()
{
printf("multiple of 2 between 1 and 100");
for(int i=1;i<101;i++)
if(i%2==0)
printf("%d ",i);
}
void main()
{
clrscr();
mul();
getch();
}