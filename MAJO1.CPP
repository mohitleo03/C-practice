#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int ch;

struct stud
{
   char name[20], username[30], gender[6], pwd[5], location[8], phone_no[11];
   int roll_no, cls, seat_no, bus_no, age;

}stud;

struct staff
{
   char name[20], username[30], gender[6], pwd[5], location[8], phone_no[11];
   int  bus_no, age;

}staff;

struct bus
{
   char driver_name[20], location[8];
   int bus_no;
}bus;

void choice();
void reg();          //register details of new user
void stud_login();   //student login
void staff_login();  //staff login
void notice();

void choice()
{
     printf("\t\t\t-----ENTER CHOICE-----\n1.Register\n2.Staff Login\n3.Student Login\n4.Current Notices\n ");
     scanf("%d", &ch);

     switch(ch)
     {
		case 1: reg();
			break;

		case 2: staff_login();
			break;

		case 3: stud_login();
			break;

		case 4: notice();
			break;

		case 5:	printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t-----Thanks for coming:)-----");
			break;

		default: printf("\nWrong choice. Please enter a valid choice: ");
      }
}

void reg()
{
  printf("\nDo you want to register as: \n1.Student\n2.Staff?\n\nEnter choice: ");
  scanf("%d", &ch);

  int i, x=100+random(899);
  char t[5];
  itoa(x,t,10);

  switch(ch)
  {
	case 1: randomize();
		FILE *fptr;
		fptr=fopen("stud_data.txt", "a");
		printf("\nEnter your name: ");
		gets(stud.name);
		printf("Enter your age: ");
		scanf("%d", &stud.age);
		printf("Enter your class: ");
		scanf("%d", &stud.cls);
		printf("Enter your roll no.: ");
		scanf("%d", &stud.roll_no);
		printf("Enter your gender: ");
		scanf("%s", stud.gender);
		printf("Enter your phone no: ");
		scanf("%s", stud.phone_no);
		for(i=0; stud.name[i]!=' '; i++)
		{
		     stud.username[i]=stud.name[i];
		}
		stud.username[i]='\0';
		strcat(stud.username, "t");
		fprintf(fptr, "%s", stud.name);
		fprintf(fptr, "%s", stud.username);
		fprintf(fptr, "%d", stud.cls);
		fprintf(fptr, "%d", stud.roll_no);
		fprintf(fptr, "%d", stud.age);
		fprintf(fptr, "%s", stud.gender);
		fprintf(fptr, "%s", stud.phone_no);
		fclose(fptr);
		choice();
		break;

	case 2: randomize();
		FILE *fp;
		fp=fopen("staff_data.txt", "a");
		printf("\nEnter your name: ");
		scanf("%s", staff.name);
		printf("Enter your age: ");
		scanf("%d", &stud.age);
		printf("Enter your gender: ");
		scanf("%s", staff.gender);
		printf("Enter your phone no: ");
		scanf("%s", staff.phone_no);
		for(i=0; staff.name[i]!=' '; i++)
		{
		     stud.username[i]=staff.name[i];
		}
		strcat(staff.username, "t");
		fprintf(fp, "%s", staff.name);
		fprintf(fp, "%s", staff.username);
		fprintf(fp, "%d", staff.age);
		fprintf(fp, "%s", staff.gender);
		fprintf(fp, "%s", staff.phone_no);
		fclose(fp);
		choice();
		break;
    }
}

void stud_login(){}
void staff_login(){}
void notice(){}

void main()
{
  clrscr();
  choice();
  getch();
}