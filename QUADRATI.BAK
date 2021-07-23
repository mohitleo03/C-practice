#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
float x1,x2;
int a,b,c,t;
printf("In equation a*x^2+b*x+c if b^2-4*a*c>0 means equation has 2 roots \n if b^2-4*a*c=0 means equation has one root \n if b^2-4*a*c<0 means equatioon has no roots or we can say imaginary roots \n");
printf("enter values of a,b,c");
scanf("%d%d%d",&a,&b,&c);
t=b*b-4*a*c;
if(t>0)
{
x1=(-b+sqrt(t))/2*a;
x2=(-b-sqrt(t))/2*a;
printf("the equation %d *x^2+ %d *x+ %d has 2 roots which are %f \t %f",a,b,c,x1,x2);
}
if(t==0)
{
x1=-b/2*a;
printf("the equation %d *x^2+ %d *x+ %d has 1 root which is %f",a,b,c,x1);
}
if(t<0)
printf("the equation %d *x^2+ %d *x+ %d has no roots means imaginary roots",a,b,c);
getch();
}


