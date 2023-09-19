#include<stdio.h>
#include<math.h>
int main ()
{
	int B,R,a;
	scanf("%d%d",&B,&R);
	if (R=1)
	a=B*0.27;
	else if (R=2)
	a=B*0.24;
	else if (R=3)
	a=B*0.16;
	else if (R=4)
	a=B*0.12;
	else
	printf("the gross is %d", B+a+0.48*B+0.08*B);
	return 0;
}
