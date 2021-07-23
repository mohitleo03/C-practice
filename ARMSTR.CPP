#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int n,d,d1,s=0;
printf("enter the number &no. of digits in your number");
scanf("%d%d",&n,&d);
for(int i=0;i<d;i++)
{
d1=n/pow(10,d-i-1);
printf("%d\n%d\n",d1,d);
s+=pow(d1,d);
n=n-d1*pow(10,d-i);
}
if(n==s)
printf("yes it is armstrong number");
else
printf("no it is not armstrong number");
getch();
}




