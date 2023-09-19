#include<stdio.h>
#include<math.h>
int main ()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
		if(a>b&&a>c)
		{
			printf("%d,a is greater of the three");
		}
		else if (b>a&&b>c)
		{
			printf("%d,b is greater of the three");
		}
		else
		printf("c is greater of the three");
		
		return 0;
	
}
