#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,sum=0,i=1;
printf("enter n");
scanf("%d",&n);
while(i<=n)
sum+=i++;
printf("sum upto n is %d",sum);
getch();
}
