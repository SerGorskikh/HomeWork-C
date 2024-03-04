#include <stdio.h>

int main(void)
{
	int a,b,c,d;
	printf ("input number:\n");
	scanf("%d %d", &a,&b);
	c=a<b?a:b;
	d=a>b?a:b;
	printf("%d %d\n",c,d);
	return 0;
}
