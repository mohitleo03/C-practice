#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int ch;           //for choice

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

struct bus      //structure for bus data
{
   char complaint[500];
   int bus_no,location;
}bus;

void choice();            //main menu
void reg();               //register details of new user
void stud_login();        //student login
void staff_login();       //staff login
void notice();            //will show current notice
void allotment_form();    //will allot bus and seat no.
void submit_complaint();  //will take complaint of student
void check_staff_det();   //dislay staff details for respectie bus
void complaint_box();     //will show complaint to staff iif any submitted
void publish_notice();    //will publish notice by staff
void check_routes();      //display routes with staff name and bus number


void choice()             //main menu
{
     clrscr();
     printf("\t\t\t-----ENTER CHOICE-----\n1.Register\n2.Staff Login\n3.Student Login\n4.Current Notices\n5.Exit\n");
     scanf("%d", &ch);

     switch(ch)
     {
		case 1: reg();
			choice();
			break;

		case 2: staff_login();
			choice();
			break;

		case 3: stud_login();
			choice();
			break;

		case 4: notice();
			choice();
			break;

		case 5: clrscr();
			printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t-----Thanks for coming:)-----");
			break;

		default: printf("\nWrong choice. Please enter a valid choice: ");
      }
}

void reg()         //registration
{
  printf("\nDo you want to register as: \n1.Student\n2.Staff?\n\nEnter choice: ");
  scanf("%d", &ch);

  randomize();
  int i, x=100+random(899), chk;
  char t[5], t1[20], temp;
  itoa(x,t,10);

  switch(ch)
  {
	case 1: //Takes details of the student and stores them in the file
		FILE *fptr;
		fptr=fopen("user.dat", "a");
		printf("\nEnter your first name: ");
		scanf("%s", stud.namef);
		//check for valid name (i.e., the name does not contain any digits
		for(i=0; stud.namef[i]!='\0'; i++)
		{
		      temp=stud.namef[i];
		      if(isdigit(temp))
		      {
			 printf("\nPlease enter a valid name: ");
			 scanf("%s", stud.namef);
			 break;
		      }
		}

		printf("Enter your 4 digit Password: ");
		for(int i=0; i<4; i++)
		{
			stud.pwd[i]=getch();
			printf("*");
		}
		stud.pwd[i]='\0';
		strcpy(t1, stud.namef);
		strcat(t1, t);
		strcpy(stud.username, t1);

		fwrite(&stud,sizeof(struct stud),1,fptr);
		fclose(fptr);
		printf("\nYour username is %s\nPlease keep your username for future reference", stud.username);
		getch();
		break;

	case 2: //Takes details of the student and stores them in the file
		FILE *fp;
		fp=fopen("staff_data.dat", "a");
		printf("\nEnter your first name: ");
		scanf("%s", staff.namef);
		for(i=0; staff.namef[i]!='\0'; i++)
		{
		      temp=staff.namef[i];
		      if(isdigit(temp))
		      {
			 printf("\nPlease enter a valid name: ");
			 scanf("%s", staff.namef);
			 break;
		      }
		}

		printf("Enter your last name: ");
		scanf("%s", staff.namel);
		for(i=0; staff.namel[i]!='\0'; i++)
		{
		      temp=staff.namel[i];
		      if(isdigit(temp))
		      {
			 printf("\nPlease enter a valid name: ");
			 scanf("%s", staff.namel);
			 break;
		      }
		}

		printf("Enter your age: ");
		scanf("%d", &staff.age);
		chk=staff.age;
		if(chk<0 || chk>65)
		{
		    printf("\nPlease enter a valid age: ");
		    scanf("%d", &staff.age);
		}

		printf("Enter your gender: ");
		scanf("%s", staff.gender);
		for(i=0; staff.gender[i]!='\0'; i++)
		{
			temp=staff.gender[i];
			if(isdigit(temp))
			 {
			   printf("\nPlease enter a valid gender: ");
			   scanf("%s", staff.gender);
			   break;
			 }
		}

		printf("Enter your phone no: ");
		scanf("%s", staff.phone_no);
		for(i=0; staff.phone_no[i]!='\0'; i++)
		{
			temp=staff.phone_no[i];
			if(isalpha(temp))
			 {
			   printf("\nPlease enter a valid phone number: ");
			   scanf("%s", staff.phone_no);
			   break;
			 }
		}
			printf("Enter your 4 digit Password: ");
			for(i=0; i<4; i++)
			{
				staff.pwd[i]=getch();
				printf("*");
			}
			staff.pwd[i]='\0';
		strcpy(t1, staff.namef);
		strcat(t1, t);
		strcpy(staff.username, t1);

		printf("\nEnter your bus no: ");
		scanf("%d", &staff.bus_no);
			printf("Enter your location: Sector ");
		scanf("%d", &staff.location);
		printf("\nYour username is %s\nPlease keep your username for future reference", staff.username);
		getch();
		fwrite(&staff,sizeof(struct staff),1,fp);
		fclose(fp);
	       //	printf("\nYour username is %s\nPlease keep your username for future reference", staff.username);
	       //	getch();
		break;
    }
}

void stud_login()
{
   int a, x=0;
   char c, pass[5],username[20];
   printf("\n\n\n\t\t\t----Welcome to Student Login Portal----\n");
   printf("Enter username: ");
   scanf("%s", username);

   FILE *f;
   f=fopen("user.dat", "r");
   while(fread(&stud,sizeof(struct stud),1,f))
   {
       if(strcmp(stud.username, username)==0)
       {
	  clrscr();
		int n=3;
		while(n)
		{
			printf("Enter your Password\n");
			for(int i=0; i<4; i++)
			{
				pass[i]=getch();
				printf("*");
			}
			pass[i]='\0';

				if(strcmp(pass,stud.pwd)==0)
				{
					x=1;
					printf("\n\t\t\t-----LOGIN SUCCESFULL-----\n");
					printf("\n\t\t\t\tYou are welcome");
					break;
				}
				else
				printf("\nSorry, try again");

				n--;


				if(n==0)
				{
					printf("\nBLOCKED");
				}

		}
       }
       else
       {
		printf("\nUsername not found");
       }
   }

   if(x==1)
   printf("\nEnter Your Choice \n 1.Allotment Form\n2.Submit Complaint\n3.Check Staff's Details\n");
   scanf("%d", &ch);
   switch(ch)
   {
	case 1: allotment_form();
		break;

	case 2: submit_complaint();
		break;

	case 3: check_staff_det();
		break;

	default: printf("\nWrong input!");
   }
   choice();
}

void staff_login()
{
   int a, x=0;
   char c, pass[5],username[20];
   printf("\n\n\n\t\t\t----Welcome to Staff Login Portal----\n");
   printf("Enter username: ");
   scanf("%s", username);

   FILE *f;
   f=fopen("staff_data.dat", "r");
   while(fread(&staff,sizeof(struct staff),1,f))
   {
       if(strcmp(staff.username, username)==0)
       {
	  clrscr();
		int n=3;
		while(n)
		{
			printf("Enter your Password\n");
			for(int i=0; i<4; i++)
			{
				pass[i]=getch();
				printf("*");
			}
			pass[i]='\0';

				if(strcmp(pass,staff.pwd)==0)
				{
					x=1;
					printf("\n\t\t\t-----LOGIN SUCCESFULL-----\n");
					printf("\n\t\t\t\tYou are welcome");
					break;
				}
				else
				printf("\nSorry, try again");

				n--;


				if(n==0)
				{
					printf("\nBLOCKED");
				}

		}
       }
       else
       {
		printf("\nUsername not found");
       }
   }

   if(x==1)  //indicates login successful
   printf("Enter Your Choice \n 1.Complaint Box\n2.Publish Notice\n3.Check Routes With Allocated Staff\n");
   scanf("%d",&ch);
   switch(ch)
   {
	case 1: complaint_box();
		break;
	case 2: publish_notice();
		break;
	case 3: check_routes();
		break;
	default: printf("wrong input! enter a valid choice");
   }
}
void notice()
{
  char notice[500];
  FILE *f;
  f=fopen("notice.txt","r");
  fgets(notice,200,f);
  printf("%s",notice);
  fclose(f);
}
void allotment_form()
{
   int i, chk;
   char temp;

   FILE *f;
   f=fopen("stud_data.dat", "a");
   printf("\nEnter your first name: ");
   scanf("%s", stud.namef);

   //check for valid name (i.e., the name does not contain any digits
   for(i=0; stud.namef[i]!='\0'; i++)
   {
	      temp=stud.namef[i];
	      if(isdigit(temp))
	      {
			 printf("\nPlease enter a valid name: ");
			 scanf("%s", stud.namef);
			 break;
	      }
   }

   printf("Enter your last name: ");
   scanf("%s", stud.namel);

   //check for valid name (i.e., the name does not contain any digits
   for(i=0; stud.namel[i]!='\0'; i++)
   {
	      temp=stud.namel[i];
	      if(isdigit(temp))
	      {
			 printf("\nPlease enter a valid name: ");
			 scanf("%s", stud.namel);
			 break;
	      }
   }

   printf("Enter your age: ");
   scanf("%d", &stud.age);
   chk=stud.age;
   //check for valid age (i.e., the age is above 3 and less than 60
   if(chk<3 || chk>20)
   {
	    printf("\nPlease enter a valid age: ");
	    scanf("%d", &stud.age);
   }

   printf("Enter your class: ");
   scanf("%d", &stud.cls);
   chk=stud.cls;
   //check for valid class (i.e., the class does not contain any alphabets
   if(chk<0 || chk>12)
   {
	    printf("\nPlease enter a valid class: ");
	    scanf("%d", &stud.cls);
   }
   printf("Enter your roll no.: ");
   scanf("%d", &stud.roll_no);

   //check for valid roll number (i.e., the roll number does not contain any alphabets)
   chk=stud.roll_no;
   if(chk<0)
   {
	    printf("\nPlease enter a valid roll number: ");
	    scanf("%d", &stud.roll_no);
   }

   printf("Enter your gender: ");
   scanf("%s", stud.gender);
   for(i=0; stud.gender[i]!='\0'; i++)
   {
		temp=stud.gender[i];
		if(isdigit(temp))
		 {
			   printf("\nPlease enter a valid gender: ");
			   scanf("%d", stud.gender);
			   break;
		 }
   }

   printf("Enter your phone no: ");
   scanf("%s", stud.phone_no);
   for(i=0; stud.phone_no[i]!='\0'; i++)
   {
		temp=stud.phone_no[i];
		if(isalpha(temp))
		 {
			   printf("\nPlease enter a valid phone number: ");
			   scanf("%s", stud.phone_no);
			   break;
		 }
   }

   printf("Our school transport facility is available in the following areas. Choose the nearset one.");
   printf("\nSR.No.\tLOCATION");
   FILE *fptr;
   fptr=fopen("bus_data.dat","r");
   while(fread(&bus,sizeof(struct bus),1,fptr))
   {
	printf("\n%d\tSEC.%d\n",bus.bus_no,bus.location);
   }
   printf("Enter location: Sector ");
   scanf("%d",&stud.location);
   stud.bus_no=1+random(5)+random(6);
   stud.seat_no=1+random(10)+random(9);
   fclose(fptr);

   printf("\nYour bus no: %d", stud.bus_no);

   printf("Your seat no: %d", stud.seat_no);
   getch();


   fwrite(&stud,sizeof(struct stud),1,f);
   fclose(fptr);
   fclose(f);

}
void submit_complaint()
{
   char complaint[200],busno[203];
   FILE *f1;
   f1=fopen("compl.txt","a");
   printf("\nIncovenience is regretted. Please enter your complaint: ");
   scanf("%s",complaint);
   printf("enter your bus no");
   scanf("%d",&busno);
   strcat(busno,complaint);
   fprintf(f1,"%s",busno);
   fclose(f1);
}

void check_staff_det()
{
   int bus_no;
   printf("\nEnter your bus no: ");
   scanf("%d", &bus_no);
   FILE *f;
   f=fopen("staff.dat", "r");
   while(fread(&staff,sizeof(struct staff),1,f))
   {

      if(bus_no==staff.bus_no)
	{
		printf("\nStaff Details:\n");
		printf("\nName: %s %s\nContact No: %s", staff.namef, staff.namel, staff.phone_no);
		getch();
		break;
	}
   }
   fclose(f);
}

void complaint_box()
{
  char compl[200];
  FILE *f;
  f=fopen("compl.txt","r");
 fgets(compl,200,f);
 printf("%s",compl);
 getch();
fclose(f);
}

void publish_notice()
{
FILE *f;
f=fopen("notice.txt","a");
char notice[500];
printf("enter notice to be publised");
gets(notice);
fprintf(f, "%s", notice);
fclose(f);
//notice to be saved in staff file
}

void check_routes()
{
   FILE *fptr;
   fptr=fopen("staff_data.dat","r");
   while(fread(&staff,sizeof(struct staff),1,fptr))
   {
   printf("staff details\n ");
   printf("%s%d%s",staff.namef,staff.bus_no,staff.phone_no);
   getch();
   }

 fclose(fptr);
}

void main()
{
  clrscr();
  choice();
  getch();
}
