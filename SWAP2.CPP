#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b;
printf("enter two numbers");
scanf("%d%d",&a,&b);
if(a<b)
{
a=b-a;
b=b-a;
a=b+a;
}
else
{
b=a-b;
a=a-b;
b=a+b;
}
printf("numbers are %d%d ",a,b);
getch();
}