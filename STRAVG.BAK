#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float avg;
int n,x[20],t=0;
printf("enter n");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
printf("enter # %d  number",i+1);
scanf("%d",&x[i]);
t+=x[i];
}
avg=t/n;
printf("average is %f \n",avg);
for(i=0;i<n;i++)
{
if(x[i]>avg)
printf(" %d is %f more than average \n",x[i],x[i]-avg);
else if(x[i]<avg)
printf(" %d is %f less than average \n",x[i],avg-x[i]);
else
printf(" %d is equal to average \n",x[i]);
}
getch();
}
