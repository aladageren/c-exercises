/* Seperates a 3 digit numbers to each digit */
#include <stdio.h>
void dgtt(int a,int *y,int *o, int *b);
int main()
{
	int x,hun,ten,units;
	printf("Enter a 3 digit number : ");
	scanf("%d",&x);
	dgtt(x,&hun,&ten,&units);
	printf("Hundreds digit : %d\n Tens digit : %d\n Units digit : %d\n",hun,ten,units);
	return 0;
}
void dgtt(int a,int *y,int *o,int *b)
{
	*y=a/100;
	*o=(a/10)%10;
	*b=a%10;
}
	
