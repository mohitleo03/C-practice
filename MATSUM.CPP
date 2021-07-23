#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int x[3][3],y[3][3],z[3][3];
printf("enter first matrix");
for(int i=0;i<3;i++)
for(int j=0;j<3;j++)
scanf("%d",&x[i][j]);
printf("enter second matrix");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&y[i][j]);
for(i=0;i<3;i++)
for(j=0;j<3;j++)
z[i][j]=x[i][j]+y[i][j];
printf("the sum of both matrix is ");
for(i=0;i<3;i++)
{
printf("\n");
for(j=0;j<3;j++)
printf("%d",z[i][j]);
}
getch();
}
