
#include <stdio.h>

int main(void)
{
	int a,b,c,d,e,max,min;
	printf ("input number:\n");
	scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
	max=a;
	max=max<b?b:max;
	max=max<c?c:max;
	max=max<d?d:max;
	max=max<e?e:max;
	min=a;
	min=min>b?b:min;
	min=min>c?c:min;
	min=min>d?d:min;
	min=min>e?e:min;
	
	printf("%d\n",min+max);
	return 0;
}
