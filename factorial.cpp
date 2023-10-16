#include<stdio.h>
#include<math.h>
int main ()
{
	int N,i=1,f;
	scanf("%d",&N);
	for (i=1;i<=N;i++)
	{
		f=f*i;
	}
	printf("%d",f);
	return 0;
}
