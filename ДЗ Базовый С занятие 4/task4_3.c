#include <stdio.h>

int main(void)
{
	int x,a,b,c,max;
	printf ("input number:\n");
	scanf("%d", &x);
	a=x/100;
	b=(x-a*100)/10;
	c=x-a*100-b*10;
	printf("%d %d %d\n",a,b,c);
	max=a;
	max=max<b?b:a;
	max=max<c?c:max;
	printf("%d\n",max);
	return 0;
}
