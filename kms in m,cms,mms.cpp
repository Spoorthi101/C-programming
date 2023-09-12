#include<stdio.h>
#include<math.h>
int main ()
{
	int a,b,c,d;
	scanf("%d",&a);
	b=a*1000;
	c=a*100000;
	d=a*1000000;
	printf("the value of a in metres is %d",b);
	printf("the value of a in cms is %d",c);
	printf("the value of a in mms is %d",d);
	return 0;
}
