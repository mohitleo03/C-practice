#include<stdio.h>
#include<conio.h>
void big(int n1,int n2,int n3)
{
if(n1>n2)
if(n1>n3)
printf("biggest is %d",n1);
if(n2>n1)
if(n2>n3)
printf("biggest is %d",n2);
else
printf("biggest is %d",n3);
}
void main()
{
clrscr();
int n1,n2,n3;
printf("enter the numbers");
scanf("%d%d%d",&n1,&n2,&n3);
big(n1,n2,n3);
getch();
}
