#define _CRT_SECURE_NO_WARNINGS //for Visual Studio compiler
#pragma warning(disable:6031) //ignore scanf warnings for Visual Studio compiler
#include<stdio.h>
#include<ctype.h>
#include<string.h>

//declare the function prototype - takes 2 char arrays for the word and the lowercase word
void lowerIt(char word[], char lowercase[]);

int main()
{
	//assign char array for word and the lowercase word
	char word[25];
	char lowercase[25];

	//get the word and store it in the word array
	printf("Print a word ");
	scanf(" %s", word);

	//call the function to make it lowercase
	lowerIt(word, lowercase);

	//printed word and lowercase word in main
	printf("\nYour word is %s, and lowercase is %s", word, lowercase);

	return 0;
}
//function definition
void lowerIt(char word[], char lowercase[])
{
	//declare int variables for the for loop, we need the length of the string for the loop and we need i for an iterator.
	int i, len = strlen(word);
	for (i = 0; i < len; i++)
	{
		//this is the easy part... the iteration of lowercase which is the first index of the array will be equal to the lowercase letter of word at the first iteration.
		lowercase[i] = tolower(word[i]);
	}
	//make lowercase[len] = to null. to terminate the string.
	lowercase[len] = '\0';
}