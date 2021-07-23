#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
FILE *fptr;
char name[40],name1[40];
fptr=fopen("record.txt","r");//r+ means it will first read then write*printf("\n enter your name:");
scanf("%s",name);
fputs(name,fptr);
rewind(fptr);  //return the pointer to starting point
fgetc(fptr,+"%s",name1);
printf("name reads from file:%s",name1);
fclose(fptr);
getch();
}
