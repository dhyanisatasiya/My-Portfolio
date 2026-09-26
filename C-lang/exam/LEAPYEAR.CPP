/*Create a C program that defines a function to check if a
given number is a leap year or not.*/

#include<stdio.h>
#include<conio.h>

void leap(int year)
{
    if(year % 4 == 0)
	printf("Leap Year");
    else
	printf("Not a Leap Year");
}

void main()
{
    int year;

    clrscr();

    printf("Enter year: ");
    scanf("%d",&year);

    leap(year);

    getch();
}