#include<stdio.h>
#include<conio.h>
#include<math.h>
int prime(int n)
{
int c=0;
for(int i=1;i<=n/2;i++)
if(n%i==0)
c++;
if(c==1)
return 1;
else
return 0;
}
int arm(int n,int d)
{
int d1,s=0,t;
t=n;
while(n!=0)
{
d1=n%10;
s+=pow(d1,d);
n=n/10;
};
if(t==s)
return 1;
else
return 0;
}
void main()
{
clrscr();
int n,d;
printf("enter the number and number of digtis");
scanf("%d%d",&n,&d);
if(prime(n)==1)
printf("its prime number\n");
else
printf("its not prime\n");
if(arm(n,d)==1)
printf("its armstrong number");
else
printf("its not arstrong number");
getch();
}