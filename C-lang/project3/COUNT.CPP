/* Develop a Program to count the total number of digits in a number. */
#include<stdio.h>
#include<conio.h>

void main()
{      	clrscr();
	long int number;
	int count = 0;
	printf("Enter any number: ");
	scanf("%ld", &number);
	do
	{
		count++;
		number = number / 10;
	 }
	while(number != 0);
	printf("Total number of digits: %d", count);
	getch();
}