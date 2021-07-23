#include<stdio.h>
#include<conio.h>
#include<string.h>
struct railrev
{
char name[20],desti[20],destf[20],train_name[20],time[5];
int no_seats,train_no,price,total_fair,code;
}d[20];
void choice();
void view_details();
int login(char name[20],char pass[20])
{
if(strcmp(name,pass)==0)
return 1;
else
return 0;
}
void reservation()
{
int t,s,c=0,c1=0;
view_details();
printf("\n\n\t\tenter train no.\n\t\t");
scanf("%d",&t);
for(int i=0;i<5;i++)
if(t==d[i].train_no)
break;
if(i==5)
{
printf("\nyou have entered wrong train no.\n");
reservation();
}
if(i<5)
{
clrscr();
printf("\n\n\t\t\t\tYou Opted For\n\n\n TRAIN NO.  TRAIN NAME         DESTINATION         SEATS      TIME    PRICE\n\n %d      %s      %s to %s      %d       %s     %d \n\n",d[i].train_no,d[i].train_name,d[i].desti,d[i].destf,d[i].no_seats,d[i].time,d[i].price);
printf("if it matches with your desired details then enter 1 to book seats\n");
scanf("%d",&c);
if(c!=1)
choice();
if(c==1)
{
printf("enter no of seats you want to book\n");
scanf("%d",&s);
if(d[i].no_seats>=s)
{
printf("cost for %d seats for your opted train is %d\n",s,s*d[i].price);
printf("enter 1 to confirm booking\n");
scanf("%d",&c1);
if(c!=1)
choice();
if(c1==1)
{
for(float x=0;x<100.0;x+=0.00001);
clrscr();
printf("booking confirm 9923 is your booking code\n");
d[5].train_no=d[i].train_no;
strcpy(d[5].desti,d[i].desti);
strcpy(d[5].destf,d[i].destf);
strcpy(d[5].time,d[i].time);
d[5].no_seats=s;
d[i].no_seats-=s;
d[5].total_fair=s*d[i].price;
d[5].code=9923;
strcpy(d[5].train_name,d[i].train_name);
}
}
else
printf("\n\nno of seats you want is not available in that\n\n");
}
}
choice();
}
void your_details()
{
int x;
printf("enter booking code");
scanf("%d",&x);
if(x==d[5].code)
printf("username -> %s \ntrain no -> %d\ntrain name -> %s\ndestination ->%s to %s \nseats booked by you ->%d \ntime of train ->%s \nyour total fair ->%d",d[5].name,d[5].train_no,d[5].train_name,d[5].desti,d[5].destf,d[5].no_seats,d[5].time,d[5].total_fair);
else
printf("wrong code");
choice();
}
void cancelation()
{
int x,c;
printf("enter booking code");
scanf("%d",&x);
if(x==d[5].code)
{
printf("username -> %s \n train no -> %d\ntrain name -> %s\ndestination ->%s to %s \n seats booked by you ->%d \ntime of train ->%s \n your total fair ->%d",d[5].name,d[5].train_no,d[5].train_name,d[5].desti,d[5].destf,d[5].no_seats,d[5].time,d[5].total_fair);
printf("this is the booking you want to cancel if yes enter 1");
scanf("%d",&c);
if(c==1)
{
printf("booking canceled");
d[5]=d[6];
}
}
else
printf("wrong code");
choice();
}
void view_details()
{
d[0].train_no=2891;
d[1].train_no=2345;
d[2].train_no=2456;
d[3].train_no=2567;
d[4].train_no=2134;
strcpy(d[0].train_name,"SHATABDI EXP");
strcpy(d[1].train_name,"MADHURAI EXP");
strcpy(d[2].train_name,"CHENNAI EXP ");
strcpy(d[3].train_name,"DELHI EXP   ");
strcpy(d[4].train_name,"KOVAI EXP   ");
strcpy(d[0].desti,"DELHI");
strcpy(d[1].desti,"MUMBAI");
strcpy(d[2].desti,"KOLKATA");
strcpy(d[3].desti,"CHENNAI");
strcpy(d[4].desti,"PUNJAB");
strcpy(d[0].destf,"UTTRAKHAND");
strcpy(d[1].destf,"DELHI");
strcpy(d[2].destf,"MUMBAI");
strcpy(d[3].destf,"KOLKATA");
strcpy(d[4].destf,"CHENNAI");
d[0].no_seats=104;
d[1].no_seats=301;
d[2].no_seats=314;
d[3].no_seats=224;
d[4].no_seats=344;
strcpy(d[0].time,"6 pm");
strcpy(d[1].time,"5 am");
strcpy(d[2].time,"7 pm");
strcpy(d[3].time,"9 pm");
strcpy(d[4].time,"3 pm");
d[0].price=300;
d[1].price=450;
d[2].price=650;
d[3].price=900;
d[4].price=500;
printf("\t\t\t\t-----TRAIN DETAILS----\n\n\n");
printf(" TRAIN NO.  TRAIN NAME         DESTINATION         SEATS      TIME    PRICE\n\n");
printf(" %d      %s     %s to %s     %d       %s     %d \n\n",d[0].train_no,d[0].train_name,d[0].desti,d[0].destf,d[0].no_seats,d[0].time,d[0].price);
printf(" %d      %s     %s to %s         %d       %s     %d \n\n",d[1].train_no,d[1].train_name,d[1].desti,d[1].destf,d[1].no_seats,d[1].time,d[1].price);
printf(" %d      %s     %s to %s       %d       %s     %d \n\n",d[2].train_no,d[2].train_name,d[2].desti,d[2].destf,d[2].no_seats,d[2].time,d[2].price);
printf(" %d      %s     %s to %s      %d       %s     %d \n\n",d[3].train_no,d[3].train_name,d[3].desti,d[3].destf,d[3].no_seats,d[3].time,d[3].price);
printf(" %d      %s     %s to %s       %d       %s     %d \n\n",d[4].train_no,d[4].train_name,d[4].desti,d[4].destf,d[4].no_seats,d[4].time,d[4].price);
}
void choice()
{
int ch;
printf("Enter Your Choice\n 1 For Reservation \n 2 For Cancelation \n 3 For View Details Of Trains \n 4 For View Details Of Your Booking\n 5 For EXIT\n");
scanf("%d",&ch);
clrscr();
switch(ch)
{
case 1:reservation();
	break;
case 2:cancelation();
	break;
case 3:view_details();
	choice();
	break;
case 4:your_details();
	break;
case 5: printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t-----THANKS FOR COMING-----");
	break;
}
}
void main()
{
clrscr();
int a;
char name[20],pass[20],c;
for(int i=0;i<3;i++)
{
printf("\t\t\t     -----LOGIN-----\n\n");
printf("Enter Username\n");
scanf("%s",d[5].name);
printf("Enter Password\n");
a=0;
c=' ';
for(int j=0;j<20;j++)
{
pass[a]=getch();
c=pass[a];
if(c==13)
break;
printf("*");
a++;
}
pass[a]='\0';

if(login(d[5].name,pass)==1)
{
printf("\n\t\t\t-----LOGIN SUCCESFULL-----\n");
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
printf("no. of attempts exceeded you have been blocked\n");
choice();
getch();
}

