#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	char str[50];
	int i, length = 0, flag = 1;
	printf("Enter any string: ");
	scanf("%s", str);

    /* Find length without string function */
	for(i = 0; str[i] != '\0'; i++)
	{
		length++;
	}

    /* Check palindrome */
	for(i = 0; i < length / 2; i++)
	{
		 if(str[i] != str[length - 1 - i])
		{
			flag = 0;
			break;
		}
	}

	if(flag == 1)
	{
		printf("The given string is a Palindrome.");
	}
	else
	{
		printf("The given string is not a Palindrome.");
	}

	getch();
}