/*Write a C program that uses pointers to swap the values of two integers.
Implement a function for the swapping operation.*/
#include<stdio.h>
#include<conio.h>

void swap(int *a, int *b)
{
	int c;

	 c = *a;
	*a = *b;
	*b = c;
}

void main()
{
	clrscr();
	int first, last;

	printf("Enter first number: ");
	scanf("%d",&first);

	printf("Enter last number: ");
	scanf("%d",&last);

	printf("Before Swap: %d %d\n",first,last);

	swap(&first,&last);

	printf("After Swap: %d %d",first,last);

	getch();
}