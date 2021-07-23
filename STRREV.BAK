#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,x[20],t,c;
printf("enter n");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
printf("enter # %d  number",i+1);
scanf("%d",&x[i]);
}
for(i=0;i<n/2;i++)
{
t=x[i];
x[i]=x[n-i-1];
x[n-i-1]=t;
}
for(i=0;i<n;i++)
printf("new # %d is %d \n",i+1,x[i]);
getch();
}

