/* develop a program that finds the length of a string a pointer */
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	char str[100];
	char *ptr;
	int length=0;

	printf("Enter any string:");
	gets(str);

	ptr =str;
	while(*ptr != '\0')
	{
		length++;
		ptr++;
	}
	printf("The lenght of a string is : %d",length);
	getch();
}