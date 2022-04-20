#include<stdio.h>
#include<conio.h>
void main()
{
int j,r1,r2,i,n,flag;
clrscr();
printf("enter the range");
scanf("%d%d",&r1,&r2);
for(i=r1;i<r2;i++)
{
flag=0;
for(j=2;j<=i/2;j++)
{
	if(i%j==0)
	{
	flag=1;
	break;
	}
}
if(flag==0)
printf("%d",i);
}
getch();