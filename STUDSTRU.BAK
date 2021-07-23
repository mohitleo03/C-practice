#include<stdio.h>
#include<conio.h>
struct stud
{
int roll_no,marksp,marksm,marksc,total,percentage;
char name[20];
}d[20];
void main()
{
clrscr();
int n;
printf("enter number of students");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
printf("enter details of # %d student\n",i+1);
printf("enter name of student ");
scanf("%s",d[i].name);
printf("enter roll no. of student");
scanf("%d",&d[i].roll_no);
printf("enter marks of student in maths");
scanf("%d",&d[i].marksm);
printf("enter marks of student in physics");
scanf("%d",&d[i].marksp);
printf("enter marks of student in chemistry");
scanf("%d",&d[i].marksc);
}
for(i=0;i<n;i++)
{
printf("details of # %d student\n",i+1);
d[i].total=d[i].marksm+d[i].marksp+d[i].marksc;
d[i].percentage=d[i].total/3;
printf("name of student is %s \nroll no of student is %d \nmarks of student in maths is %d \nmarks of student in chemistry is%d \nmarks of student in physics is %d \ntotal marks of student is %d\npercentage of student is %d\n",d[i].name,d[i].roll_no,d[i].marksm,d[i].marksc,d[i].marksp,d[i].total,d[i].percentage);
}
getch();
}