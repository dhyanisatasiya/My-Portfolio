/*Write a C program that prompts the user to enter an integer.
Using a loop, calculate and display the factorial of that number*/

#include<stdio.h>
#include<conio.h>

void main()
{
	 clrscr();
	long int fact=1;
	int i,n;

	printf("Enter a number: ");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		fact = fact * i;
	}

	printf("Factorial = %ld",fact);

	getch();
}