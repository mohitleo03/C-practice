#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[20],n,i,t;
printf("enter n");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
for(i=0;i<n;i++)
for(int j=0;j<n;j++)
printf("%d",a[i]);
getch();
}