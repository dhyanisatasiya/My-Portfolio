/*  Develop a Program to find the sum of a number's first and last digits. */
#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int number, first, last, sum;

	printf("Enter any number: ");
	scanf("%d", &number);
	last = number % 10;
	while(number >= 10)
	{
		number = number / 10;
	}

	first = number;
	sum = first + last;

	printf("The sum of the first and the last digit: %d", sum);

	getch();
}