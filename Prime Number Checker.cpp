#include <stdio.h>
int main()
{	
	long int x,i,flag;
	printf("Enter a number\n");
	scanf("%d",&x);	
	for(i=2; i<x; i++){
		if(x%i==0){
			flag=0;
			break;
		}
		else
			flag=1;
	}
	if(flag==1)
		printf("This is a prime number");	
			
	else if(flag==0)
		printf("This is not a prime number");	
			
	return 0;
}
	
	
