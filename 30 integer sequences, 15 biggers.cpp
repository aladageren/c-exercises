/* From a 15 two-number groups,chooses the bigger one and prints it */
#include <stdio.h>
int main()
{
	int a[30];
	int b[15];
	int i,j=0;
	printf("Enter 30 numbers : \n");
	for(i=0;i<30;i++)
		scanf("%d",&a[i]);
	i=0;
	while(j<15)
	{
		if(a[i]>a[i+1])
			b[j]=a[i];
		else
			b[j]=a[i+1];
		i=i+2;
		j=j+1;
}
for(j=0;j<4;j++)
	printf("B string %d. number %5d : \n",j+1,b[j]);
return 0;
}

