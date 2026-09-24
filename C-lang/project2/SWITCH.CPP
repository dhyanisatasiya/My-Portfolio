
/* switch case*/
#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	char marks;
 	printf("Enter your grade: ");
	scanf("%c", &marks);

    switch(marks)
    {
	case 'A':
	    printf("Excellent work!");
	    break;

	case 'B':
	    printf("Well done.");
	    break;

	case 'C':
	    printf("Good job.");
	    break;

	case 'D':
	    printf("You passed, but you could do better.");
	    break;



	case 'F':
	    printf("Sorry, you failed.");
	    break;

        default:
            printf("Invalid grade.");
    }

	getch();



}
