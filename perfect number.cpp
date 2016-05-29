/* Displays the array and the truth table of the array whether it is perfect number or not */
#include <stdio.h>
void mukemmel(int a[30],int n,int c[30]);
int main()
{	int n,i;
	int a[30];
	int c[30];
	printf("Enter the size of array (max 30) : \n");
	scanf("%d",&n);
	printf("Enter %d numbers  : \n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	mukemmel(a,n,c);
	
	printf("Elements of the array : \n");
	for(i=0;i<n;i++)
		printf("%4d",a[i]);
	printf("Perfect number truth table : \n");
	for(i=0;i<n;i++)
		printf("%4d",c[i]);
	return 0;
}
void mukemmel(int a[30],int n,int c[30])
{
	int i,j,toplam;
	for(i=0;i<n;i++) // Increase for each element
	{	
	for(j=1;j<a[i];j++){
		if(a[i]%j==0)
			toplam=toplam+j;}
	if(toplam==a[i])
		c[i]=1;
	toplam=0;	
}
}
	
		
	
