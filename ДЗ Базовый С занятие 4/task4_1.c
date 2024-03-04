#include <stdio.h>

int main(void)
{
	int a,b,c,max;
	printf ("input number:\n");
	scanf("%d %d %d", &a,&b,&d);
	max=a;
	max=max<b?b:a;
	max=max<c?c:b;
	printf("%d\n",max);
	return 0;
}
