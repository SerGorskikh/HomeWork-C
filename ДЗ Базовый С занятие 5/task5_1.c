#include <stdio.h>

int main(void)
{
	int a,b,sum =0;
	printf ("input number:\n");
	scanf("%d %d", &a,&b);
	//int i = b-a;
	for (int i=a;i<=b; i++)
	{
	sum += a*a;
	a++;	
	}
	printf("%d\n",sum);
	return 0;
}

