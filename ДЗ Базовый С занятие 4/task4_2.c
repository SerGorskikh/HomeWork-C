#include <stdio.h>

int main(void)
{
	int a,b,c,max;
	printf ("input number:\n");
	scanf("%d %d %d", &a,&b,&c);
	max=a;
	max=max<b?b:a;
	max=max<c?c:max;
	printf("%d\n",max);
	return 0;
}
