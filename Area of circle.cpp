#include<stdio.h>
#include<math.h>
int main ()
{
	float a,r,p;
	scanf("%f%f",&r,&p);
	a=3.14*pow(r,p);
	printf("the area of circle with radius r is %f",a);
	return 0;
}
