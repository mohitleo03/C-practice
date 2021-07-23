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
for(i=0;i<n;i++)
{
 t=x[i];
 c=0;
 for(int j=0;j<n;j++)
 if(t>=x[j])
 c++;
 if(c==n)
 {
 printf("%d is the largest number",x[i]);
 break;
 }
 }
 getch();
 }

