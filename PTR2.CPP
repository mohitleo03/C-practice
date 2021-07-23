#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int *ptr,i[10]={1,2,3,4,5,6,7,8,9};
for(int j=0;j<5;j++)
{
printf("\n %u",&i);
printf("\n %d",i);
printf("\n %d",*(&i));

}
getch();
}