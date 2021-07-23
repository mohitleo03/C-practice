#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float x,t,s=0.0,f=1.0;
printf("enter the numbere of terms to be added");
scanf("%f",&x);
for(float i=0.0;i<x;i++)
{
f=f*(i+1);
t=(i+1)/f;
s+=t;
}
printf("%f ",s);
getch();
}




