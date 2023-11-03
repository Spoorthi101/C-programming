#include<stdio.h>
int main ()
{
	int n,p,s;
	scanf("%d",&n);
	p=n%10;
	while (n>=10)
	n=n/10;
	s=p+n;
	printf("%d",s);
	return 0;
}
