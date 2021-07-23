#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int n;
char a[20][10];
printf("enter no. of strings you want to enter");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
printf("enter # %d string");
scanf("%s",a[][i]);
}
for(i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
swapstr(a[][i],a[][j]);
}
}
