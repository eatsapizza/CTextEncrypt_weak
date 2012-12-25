// Code to be worked on, and is not functioning correctly.
// This is an example of a utilization of my header file
// take it easy on me, I did this just to freshen up for next semester

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "Encrypt.h"
//FILE *inFile, *outFile;

void readFromFile();
void readFromFile(){
char temp;
  FILE *inFile;
	inFile = fopen("encryption.txt", "r");
	int count = 0;
	
	char fileInArr[70];
	for (int i = 0; i < 70; i++)
	{
		
		fileInArr[i] = fgetc(inFile);
		if(fileInArr[i] == EOF){
			fileInArr[i] = '\0';
			break;
			fclose(inFile);
		}
		
	}
	
	puts(fileInArr);
	
	system("PAUSE");
	

}

void addToFile(){
	char write[70];
	printf("Enter a string > \n");
	scanf("%s", write);
	
	printf("\n** scanf returned %s\n", write);
	FILE *outFile = fopen("encryption.txt", "r");
	int count = 0;
	
	char fileInArr[70];
	for (int i = 0; i < 70; i++)
	{
		
		fileInArr[i] = fgetc(outFile);
		if(fileInArr[i] == EOF){
			fileInArr[i] = '\0';
			break;
			fclose(outFile);
		}
		
	}
	outFile = fopen("encryption.txt", "w");
	printf("This text was encrypted \nand written to the file : %s\n\n", write);
	encrypt text(write, strlen(write));
	text.encr();
	strcat(fileInArr, "\n");
	strcat(fileInArr, write);
	/*for (int i=0; i<strlen(write);*/
	fputs(fileInArr, outFile);
	fclose(outFile);
}

void disp_menu(){
	bool control;

	printf_s("Options: \n\t1. Convert text to file\n\t2. Get from file\n\t3. Search file\n");
	char choice;
	scanf("%c", &choice);
	while (isalpha(choice))
	{
		printf("please re enter a valid option\n");
		scanf(" %c", &choice);
	}
	int intChoice = atoi(&choice);
	switch (intChoice)
	{
	case 1 || 1.0:
		addToFile();
	case 2:
		readFromFile();
	case 3:
		//----searchFile();
	default:
		
		break;
	}

}
void addToFile();
int main(){
	char pass[50] = "test";
	char pass_in[50];
	printf_s("Enter password\n");
	gets_s(pass_in);
	if (strcmp(pass, pass_in) == 0)
	{
		disp_menu();
	} else {
		printf("NO");
		
	}

}
