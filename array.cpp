/* Prints the array with an order */
#include <stdio.h>
int main ()
{
	int test[6],i;
	printf("Enter 6 numbers :\n ");
	for(i=0;i<6;i++)
		scanf("%d",&test[i]);
	for(i=0;i<6;i++)
		printf("%d . number is %d \n",i+1,test[i]);
	return 0;
}
