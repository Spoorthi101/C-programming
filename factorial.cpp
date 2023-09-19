#include<stdio.h>
#include<math.h>
int main ()
{
	int n,f;
	scanf("%d",n);
	while (n>1)
	{
	f=n*(n-1);
	n--;
    }
printf ("%d",f);
}
