#include<stdio.h>
#include<math.h>
int main ()
{
	int a,b,c,d,e,f;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	f=(a+b+c+d+e)/5;
	printf("the percentage of the student is %d",f);
	if(f>=90)
	printf ("A");
	else if (f>=80)
	printf ("B");
	else if (f>=70)
	printf ("C");
	else if (f>=60)
	printf ("D");
	else if (f>=40)
	printf ("E");
	else
	printf ("F");
	return 0;
}
