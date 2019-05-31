#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	short b;
	long c;
	unsigned int e;
	unsigned short f;
	unsigned long g;
	char A;
	unsigned char o;
	float s;
	double k;
	long l;
	clrscr();
	fflush(stdin);
	scanf("%d %i %ld %u %u %lu %c %c %f %g %LF",&a,&b,&c,&e,&f,&g,&A,&o,&s,&k,&l);
	printf("\nint=%d\nshort=%i\nlong=%ld\n unsigned values\nint=%u\t\nshort=%u\t\nlong=%lu\nchar= %c\t unsined char= %c\nfloat=%f\t\ndouble=%g\t\nlong double=%Lf\n ",a,b,c,e,f,A,o,s,k,l);
	getch();
}