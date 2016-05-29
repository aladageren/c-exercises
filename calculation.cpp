/* Prints each 4 results of basic operations */
#include <stdio.h>
void islem(int x,int y,int *t,int *f,int *c,float *b);
int main()
{
	int x,y,toplam,fark,carpim;
	float bolum;
	printf("Enter 2 integers : \n");
	scanf("%d%d",&x,&y);
	islem(x,y,&toplam,&fark,&carpim,&bolum);
	printf(" Plus %d \n Minus %d \n Multiply %d \n Division %.2f \n",toplam,fark,carpim,bolum);
	return 0;
}
void islem(int x,int y,int *t,int *f,int *c,float *b)
{
	*t=x+y;
	*f=x-y;
	*c=x*y;
	*b=(float)x/y;
}
