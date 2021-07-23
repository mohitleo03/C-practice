#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int x[3][3],t;
for(int i=0;i<3;i++)

for(int j=0;j<3;j++)

scanf("%d",&x[i][j]);

printf("now matrix is");
for(i=0;i<3;i++)
{
printf("\n");
for(int j=0;j<3;j++)
printf("%d",x[i][j]);
}
printf("transpose of the matrix is \n");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
if(i<=j)
{
t=x[i][j];
x[i][j]=x[j][i];
x[j][i]=t;
}
}
for(i=0;i<3;i++)
{
printf("\n");
for(int j=0;j<3;j++)
printf("%d",x[i][j]);
}
getch();
}
