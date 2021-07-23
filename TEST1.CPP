#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char a[20],n[20];
gets(n);
int i=0;
while(a[i]!=' ')
{
a[i]=n[i];
i++;
}
puts(n);
puts(a);
getch();
}