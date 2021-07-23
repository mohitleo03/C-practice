#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int ch;

struct stud
{
   char name[20], username[30], gender[6], pwd[5], location[8],phone_no[11];
   int roll_no, cls, seat_no, bus_no, age;

}stud;

struct staff
{
   char name[20], username[30], gender[6], pwd[5], location[8],phone_no[11];
   int  bus_no, age;

}staff;
struct bus
{
   char driver_name[20],destination[20],complaint[100];
   int bus_no;
};
void choice();
void reg();          //register details of new user
void stud_login();   //student login
void staff_login();  //staff login
void notice();       //to display notice published by staff
void allotment_form();
void submit_complaint();
void check_staff_det();
void complaint_box();
void publish_notice();
void check_routes();

void choice()
{
     printf("\t\t\t-----ENTER CHOICE-----\n1.Register\n2.Staff Login\n3.Student Login\n4.Current Notices\n5.Exit \n ");
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

		case 5: clrscr();
			printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t-----Thanks for coming:) -----");
			break;

		default: printf("\nWrong choice. Please enter a valid choice: ");
      }
}

void reg()
{
  printf("\nDo you want to register as: \n1.student\n2.Staff\n\nEnter choice: ");
  scanf("%d", &ch);
  randomize();
  int x=100+random(899);
  char t[5];
  itoa(x,t,10);

  switch(ch)
  {
	case 1:	FILE *fptr;
		fptr=fopen("stud_data.txt", "a");
		printf("\nEnter your name: ");
		scanf("%s",stud.name);
		printf("Enter your age: ");
		scanf("%d", &stud.age);
		printf("Enter your class: ");
		scanf("%d", &stud.cls);
		printf("Enter your roll no.: ");
		scanf("%d", &stud.roll_no);
		printf("Enter your gender: ");
		scanf("%s", stud.gender);
		printf("Enter your phone no: ");
		scanf("%s", &stud.phone_no);
		strcat(stud.username, "t");
		fprintf(fptr, "%s", stud.name);
		fprintf(fptr, "%s", stud.username);
		fprintf(fptr, "%d", stud.cls);
		fprintf(fptr, "%d", stud.roll_no);
		fprintf(fptr, "%d", stud.age);
		fprintf(fptr, "%s", stud.gender);
		fprintf(fptr, "%lld", stud.phone_no);
		fclose(fptr);
		choice();
		break;

	case 2:	FILE *fp;
		fp=fopen("staff_data.txt", "a");
		printf("\nEnter your name: ");
		scanf("%s", staff.name);
		printf("Enter your age: ");
		scanf("%d", &stud.age);
		printf("Enter your gender: ");
		scanf("%s", staff.gender);
		printf("Enter your phone no: ");
		scanf("%s", &staff.phone_no);
		strcat(staff.username, "t");
		fprintf(fp, "%s", staff.name);
		fprintf(fp, "%s", staff.username);
		fprintf(fp, "%d", staff.age);
		fprintf(fp, "%s", staff.gender);
		fprintf(fp, "%lld", staff.phone_no);
		fclose(fp);
		clrscr();
		break;
    }
}
void stud_login()
{
   int a,x=0;
   char name[20],c,pass[5];
   printf("\n\n\n\t\t\t----Welcome to Student Login Portal----\n");
   printf("enter username\n");
   scanf("%s",name);
   //file handeling
   if(1)//strcmp(stud.name,name)==0)(orignal statement)
   {
   for(int i=0;i<3;i++)
      {
	printf("Enter Password\n");
	a=0;
	c=' ';
	for(int j=0;j<5;j++)
	   {
		pass[a]=getch();
		c=pass[a];
		if(c==13)
		break;
		printf("*");
		a++;
	   }
	pass[a]='\0';
	//file handeling
	if(1)//strcmp(stud.pwd,pass)==0) (orignal statement)
	    {
		printf("\n\t\t\t-----LOGIN SUCCESFULL-----\n");
		x=1;          //tells login successfull
		break;
	    }
	else
	   {
		printf("\nlogin failed %d attempts left\n",3-i-1);
		for(float x=0;x<100.0;x+=0.00001);
		clrscr();
	   }
      }
      if(i==3)
      {
	printf("no. of attempts exceeded you have been blocked\n");
	choice();
      }
   }
   if(x==1)  //indicates login successfull
   printf("Enter Your Choice \n 1.Allotment Form\n2.Submit Complaint\n3.Check Staff's Details\n");
   scanf("%d",ch);
   switch(ch)
   {
	case 1: allotment_form();
		break;
	case 2: submit_complaint();
		break;
	case 3: check_staff_det();
		break;
	default : printf("wrong input! enter a valid choice");
   }
}
void staff_login()
{
   int a,x=0;
   char name[20],c,pass[5];
   printf("\n\n\n\t\t\t----Welcome to Staff Login Portal----\n");
   printf("enter username\n");
   scanf("%s",name);
   //file handeling
   if(1)//strcmp(staff.name,name)==0)(orignal statement)
   {
   for(int i=0;i<3;i++)
      {
	printf("Enter Password\n");
	a=0;
	c=' ';
	for(int j=0;j<5;j++)
	   {
		pass[a]=getch();
		c=pass[a];
		if(c==13)
		break;
		printf("*");
		a++;
	   }
	pass[a]='\0';
	//file handeling
	if(1)//strcmp(staff.pwd,pass)==0) (orignal statement)
	    {
		printf("\n\t\t\t-----LOGIN SUCCESFULL-----\n");
		x=1;          //tells login successfull
		break;
	    }
	else
	   {
		printf("\nlogin failed %d attempts left\n",3-i-1);
		for(float x=0;x<100.0;x+=0.00001);
		clrscr();
	   }
      }
      if(i==3)
      {
	printf("no. of attempts exceeded you have been blocked\n");
	choice();
      }
   }
   if(x==1)  //indicates login successfull
   printf("Enter Your Choice \n 1.Complaint Box\n2.Publish Notice\n3.Check Routes With Allocated Staff\n");
   scanf("%d",ch);
   switch(ch)
   {
	case 1: complaint_box();
		break;
	case 2: publish_notice();
		break;
	case 3: check_routes();
		break;
	default : printf("wrong input! enter a valid choice");
   }
}
void notice(){}
void allotment_form()
{
printf("Our School Transport Facility Is available In The Following Areas choose Nearset One");
//file handeling
printf("bus no. %d \t area %s \n");

}
void submit_complaint(){}
void check_staff_det(){}
void complaint_box(){}
void publish_notice(){}
void check_routes(){}
void main()
{
  clrscr();
  choice();
  getch();
}
