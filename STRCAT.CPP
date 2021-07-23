#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char s1[10],s2[20];
printf("enter strings");
scanf("%s%s",s1,s2);
for(int i=0;s1[i]!='\0';i++);
for(int j=0;s2[j]!='\0';j++,i++)
{
s1[i]=s2[j];
}
s1[i]='\0';
printf("%s",s1);
getch();
}