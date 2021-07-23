#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char str[50],temp;
int i,j;
printf("\n Enter the string:-");
gets(str);
printf(" %s Alphabatical Order:-",str);
for(i=0;str[i];i++)
{
for(j=i+1;str[j];j++)
{
if(str[j]<str[i])
{
temp=str[j];
str[j]=str[i];
str[i]=temp;
}
}
}
printf(" %s\n",str);
getch();
}