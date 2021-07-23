#include<stdio.h>
#include<conio.h>

struct stud       //structure for student data
{
   char namef[20], namel[20], username[30], gender[6], pwd[5], phone_no[11];
   int roll_no, cls, seat_no, bus_no, age,location;
}stud;

struct staff     // structure for staff data
{
   char namef[20], namel[20], username[30], gender[6], pwd[5], phone_no[11], notice[500];
   int  bus_no, age, location, seat_no;
}staff;
void main()
{
clrscr();
FILE *f1;
f1=fopen("stud_data.dat","r");  //file name
while(fread(&stud,sizeof(struct stud),1,f1))
{
printf("first name %s\nlast name %s\nusername %s\ngender %s\nphone no %s\nroll no %d\nclass %d\nseat no %d\nbus no %d\nlocation %d\n age %d\n",stud.namef,stud.namel,stud.username,stud.gender,stud.phone_no,stud.roll_no,stud.cls,stud.bus_no,stud.seat_no,stud.location,stud.age);
}
fclose(f1);
getch();
}