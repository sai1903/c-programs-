#include<stdio.h>
#include<conio.h>
void main()
{
int n,l;
long s=0;
clrscr();
printf("enter integer number to be added \n");
scanf("%d",&n);
while(n>0)
{
	l=n%10;
	s=s+l;
	n=n/10;
}
printf("sum of digits in integer=%d\n\n",s);
getch();
}
