#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
struct book
{
char name;
float price;
int pages;
};
struct book b1={'b',130.0,550};
printf("\n %u ",&b1.name);
printf("\n %u ",&b1.price);
printf("\n %u ",&b1.pages);
getch();
}