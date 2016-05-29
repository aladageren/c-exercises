/* This code starts with the first character and prints it after that it includes the next character and prints these two, and it goes that way
For example : 	Input : Hello 
				Output : HHeHelHellHello  */
#include <stdio.h>
#include <string.h>
void fonk(char string1[30]);
int main ()
{
	char string1[30];
	printf("Enter a string : \n");
	gets(string1);
	fonk(string1);
	return 0;
}
void fonk(char string1[30])
{
	int i,k,l;
	k=strlen(string1);
	for(i=0;i<k;i++)
		for(l=0;l<=i;l++)
			printf("%c",string1[l]);
		}
	
