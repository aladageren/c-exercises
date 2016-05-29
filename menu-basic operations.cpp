/* Basic operations with an interactive menu */
#include <stdio.h>
void menu();
int topla(int x, int y);
int cikar(int x, int y);
int carp(int x, int y);
float bol(int x, int y);

int main()
{	printf("Choose one from +,-,*,/ or D(stop) : \n");
	menu();
	return 0;
}
void menu()
{	int x,y;
	float cevap;
	char u;
	do{
	printf("+   Plus\n");
	printf("-   Minus\n");
	printf("*   Multiply\n");
	printf("/   Division\n");
	printf("D   Stop\n");
	printf(" Your choice : \n");
	scanf("%c",&u);
	printf("Enter 2 integers.\n");
	scanf("%d%d",&x,&y);
	if(u=='+')
		cevap=topla(x,y);
	else if(u=='-')
		cevap=cikar(x,y);
	else if(u=='*')
		cevap=carp(x,y);
	else if(u=='/')
		cevap=bol(x,y);
		
	printf("Result is %.2f \n",cevap);

}	while(u!='D');
}
int topla(int x,int y)
{	int sonuc;
	sonuc=x+y;
	return(sonuc);
}
int cikar(int x,int y)
{	int sonuc;
	sonuc=x-y;
	return(sonuc);
}
int carp(int x,int y)
{	int sonuc;
	sonuc=x*y;
	return(sonuc);
}
float bol(int x,int y)
{	float sonuc;
	sonuc=x/y;
	return(sonuc);
}

		
