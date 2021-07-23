#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n1,n2,sum,diff,prod,div;
char choice;
printf("enter + for addition \n enter - for subtraction \n enter * for multiplication \n enter / for division \n");
scanf("%c",&choice);
printf("enter numbers");
scanf("%d%d",&n1,&n2);
switch(choice)
{
case '+': sum=n1+n2;
	  printf("sum is %d",sum);
	break;
case '-': diff=n1-n2;
	  printf("difference is %d",diff);
	break;
case '*': prod=n1*n2;
	  printf("product is %d",prod);
	break;
case '/':div=n1/n2;
	  printf("division is is %d",div);
	break;
default: printf("invalid input");
}
getch();
}