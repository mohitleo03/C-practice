#include<stdio.h>
#include<conio.h>
void main()
{
struct student
{
char name[40];
struct avg
{
int sub1,sub2;
float average;
}avg;
}stud1,*ptr=&stud1;
int total;
printf("enter values");
scanf("\n %s ",(*ptr).name);
printf("enter marks of sub1 & sub2");
scanf("%d",&ptr->avg.sub1);
scanf("%d",&ptr->avg.sub2);
total=ptr->avg.sub1+ptr->avg.sub2;
ptr->avg.average=total/2;
printf("%f",ptr->avg.average);
printf("%d",ptr->avg.sub1);
getch();
}

