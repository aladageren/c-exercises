/* This code turns first letters of words into capital letters */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void fonksiyon(char string1[90]);
int main()
{
	char string1[90];
	puts("Enter a string :");
	gets(string1);
	fonksiyon(string1);
	printf("%s",string1);
	return 0;
}
void fonksiyon(char string1[90])
{
	int k,i;
	k=strlen(string1);
	string1[0]=toupper(string1[0]);
	for(i=0;i<k;i++)
		if(string1[i]==' ')
			string1[i+1]=toupper(string1[i+1]);
}
		
