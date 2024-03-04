#include <stdio.h>

int main(void)
{
	int a,b,c,d,x;
	printf ("input number:\n");
	scanf("%d", &a);
	b=a/100;
	c=(a-b*100)/10;
	d=a-b*100-c*10;
	x=b*c*d;
	
	printf("%d",x);
	return 0;
}
