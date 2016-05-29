/* Sums up all digits of a number */
#include <stdio.h>
int bastop(int x);
int main()
{
	int a, cevap;
	printf("Enter a integer : \n");
	scanf("%d",&a);
	cevap= bastop(a);
	printf("Total of each digits is %d\n",cevap);
	return 0;
}
int bastop(int x)
{	int toplam=0;
	while(x!=0)
	{
		toplam+=x%10;
		x=x/10;
	}
	return(toplam);
}
