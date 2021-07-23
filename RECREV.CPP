#include<stdio.h>
#include<conio.h>
void rev(int a[20],int &n)
{
int t,i=0;
t=a[i];
a[i]=a[n-1-i];
a[n-1-i]=t;
i++;
if(i<=n/2)
rev(a[20],n);
}
void main()
{
clrscr();
int a[20],n;
printf("enter n");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
printf("enter # %d element of array",i+1);
scanf("%d",&a[i]);
}
i=0;
rev(a[20],n);
getch();
}
