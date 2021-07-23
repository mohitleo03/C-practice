#include<stdio.h>
#include<conio.h>
void main()
{
int d1,d2,q,r;
printf("enter divident and divisor");
scanf("%d%d",&d1,&d2);
q=d1/d2;
r=d1-q*d2;
printf("quotient  is =%d\n",q);
printf("remainder is =%d",r);
getch();
}

