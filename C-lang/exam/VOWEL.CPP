/*Develop a C program that reads a sentence from the user.Create a
function to count the occurrences of each vowel in the sentence and
display the counts.*/

#include<stdio.h>
#include<conio.h>

void vowel(char s[])
{
	int i;
	int a=0,e=0,in=0,o=0,u=0;

	for(i=0; s[i]!='\0'; i++)
	{
		if(s[i]=='a' || s[i]=='A')
		a++;
		else if(s[i]=='e' || s[i]=='E')
		e++;
		else if(s[i]=='i' || s[i]=='I')
		in++;
		else if(s[i]=='o' || s[i]=='O')
		o++;
		else if(s[i]=='u' || s[i]=='U')
		u++;
	}

	printf("\nA = %d",a);
	printf("\nE = %d",e);
	printf("\nI = %d",in);
	printf("\nO = %d",o);
	printf("\nU = %d",u);
}

void main()
{
	clrscr();
	char s[100];
	int i=0;
	char ch;
	printf("Enter a sentence: ");

	while((ch=getchar())!='\n')
	{
		s[i]=ch;
		i++;
	}

	s[i]='\0';

	vowel(s);

	getch();
}