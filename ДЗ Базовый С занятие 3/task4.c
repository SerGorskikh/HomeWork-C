#include <stdio.h>

int main(void)
{
	int a,b,c;
	printf ("input number:\n");
	scanf("%d %d %d", &a,&b,&c);
	float d;
	d=(a+b+c)/3.;
	printf("%.2f",d);
	return 0;
}

