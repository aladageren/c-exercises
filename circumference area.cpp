/* Circumference and are of the rectangle */
#include <stdio.h>
void f(int en,int boy,int *cevre,int *alan);
int main()
{
	int en,boy,c,a;
	printf("Enter the rectangles' sides : \n");
	scanf("%d%d",&en,&boy);
	f(en,boy,&c,&a);
	printf("Circumference of the rectangle : %d\n Area of the rectangle : %d \n",c,a);
	return 0;
}
void f(int en,int boy,int *cevre,int *alan)
{
	*cevre=2*(en+boy);
	*alan=en * boy;
}
