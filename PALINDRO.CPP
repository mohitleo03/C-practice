#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
long int n,d,dl,df,t,a,c=0;
printf("enter the number and number of digits in the number");
scanf("%ld%ld",&n,&d);
t=n;
for(int i=0;i<d/2;i++)
{
df=t%10;
a=pow(10,d-i-1);
dl=t/a;
t=t%a;
t=t/10;
if(dl==df)

    c++;
}
if(c==d/2)
printf("yes this number is palindrome");
else
printf("no this number is not palindrome");
getch();
}