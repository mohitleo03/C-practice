#include<stdio.h>
#include<conio.h>
void main ()
{
clrscr();
int n,d,d1,count=0;
printf("enter the number and digit");
scanf("%d%d",&n,&d);
for(int i=0;n!=0;i++)
{
d1=n%10;
n/=10;
if(d==d1)
count++;
}
printf("the frequency of the digit is %d",count);
getch();
}