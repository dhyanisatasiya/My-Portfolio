/* ternary*/
#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int number;
	char marks;
	printf("Enter your number:");
	scanf("%d",&number);
	 marks = (number >= 90) ? 'A' :
	    (number >= 80) ? 'B' :
	    (number >= 70) ? 'C' :
	    (number >= 60) ? 'D' :
	    (number>= 50) ? 'E' : 'F';

	 printf("Your grade is %c\n", marks);
	getch();

}