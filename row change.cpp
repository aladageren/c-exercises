/* Changes the rows, keeping the middle one still */
#include <stdio.h>
int main ()
{
	int m,i,j;
	int dizi1[9][9];
	int dizi2[9][9];
	printf("Enter the size of matrix : \n");
	scanf("%d",&m);
	printf(" Enter a %d x %d matrix \n: ",m,m);
	for(i=0;i<m;i++)
		for(j=0;j<m;j++)
			scanf("%d",&dizi1[i][j]); 
	for(i=0;i<m;i++)
		for(j=0;j<m;j++)
			dizi2[i][j]=dizi1[m-i-1][j]; 
	printf("This is the second array.\n");
	for(i=0;i<m;i++){ 
	printf("\n");	 
		for(j=0;j<m;j++)
			printf("%3d",dizi2[i][j]);}
	return 0;
}
	
