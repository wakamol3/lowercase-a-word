#define _CRT_SECURE_NO_WARNINGS //for Visual Studio compiler
#pragma warning(disable:6031) //ignore scanf warnings for Visual Studio compiler
#include<stdio.h>
#include<ctype.h>
#include<string.h>

void lowerIt(char word[], char lowercase[]);

int main()
{
	char word[25];
	char lowercase[25];

	printf("Print a word ");
	scanf(" %s", word);

	lowerIt(word, lowercase);

	printf("\nPrinting the word in main\n");

	printf("\nYour word is %s, and lowercase is %s", word, lowercase);

	return 0;
}

void lowerIt(char word[], char lowercase[])
{
	int i, len = strlen(word);
	for (i = 0; i < len; i++)
	{
		lowercase[i] = tolower(word[i]);
	}
	lowercase[len] = '\0';
}