#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char a[3];

do{
int n,rev=0;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
rev=rev*10+n%10;
n=n/10;
}
printf("the reverse of the number is %d ",rev);
printf("enter your choice if want to exit enter x else enter anything");
scanf("%s",a);
}while(strcmpi(a, "x")!=0);
getch();
}
