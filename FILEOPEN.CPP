#include<stdio.h>
#include<conio.h>
void main()
{
getch();
FILE *fptr;
fptr=fopen("data.txt","r");
if(fptr==NULL)
printf("error");
else
fclose(fptr);
getch();
}