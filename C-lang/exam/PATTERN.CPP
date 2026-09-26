/*Implement a C program to print the following pattern using
nested for loop:*/

#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int i,j;

	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5-i; j++)
		{
			printf("  ");
		}

		for(j=1; j<=i; j++)
		{
			printf("* ");
		}

		printf("\n");
	}

	getch();
}