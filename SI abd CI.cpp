#include<stdio.h>
#include<math.h>
int main ()
{
	float SI,CI,p,r,t;
	scanf("%d%d%d,&p,&r,&t");
	SI=p*r*t/100;
	CI=p*pow((1+r/100),t);
	printf("the value of SI is %d",SI);
	printf("the value of CI is %d",CI);
	return 0;	
}
