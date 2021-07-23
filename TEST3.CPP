#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stud       //structure for student data
{
   char namef[20],namel[20],username[30],gender[6],pwd[5],phone_no[11];
   int roll_no,cls,seat_no,bus_no,age,location;
}stud,temp;

struct bus      //structure for bus data
{
   char complaint[500];
   int bus_no,location;
}bus;
void main()
{  randomize();
   int count;
   printf("Enter location: Sector ");
   scanf("%d",&stud.location);

   FILE *f1;
   f1=fopen("bus_data.dat","r");
   FILE *f2;
   f2=fopen("stud_data.dat","r");
   FILE *f3;
   f3=fopen("temp.dat","w");
   while(fread(&bus,sizeof(struct bus),1,f1))
   {
	if(bus.location!=stud.location)
	{
		fread(&stud,sizeof(struct stud),1,f2);
		fwrite(&stud,sizeof(struct stud),1,f3);
	}

	if(bus.location==stud.location)
	{
		fread(&stud,sizeof(struct stud),1,f2);
		temp=stud;
		temp.bus_no=bus.bus_no;
		temp.seat_no=1+random(10)+random(10);

		printf("%d %d",temp.bus_no,temp.seat_no);
		getch();
		fwrite(&temp,sizeof(struct stud),1,f3);
		count=1;
	}

	if(count!=1)
	printf("\nLocation not matched");
   }
   fclose(f1);
   fclose(f2);
   fclose(f3);
   getch();
   }