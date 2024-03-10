#include <stdio.h>

int main(void)
{
	int a;
	int i=0;
	printf ("input number:\n");
	scanf("%d", &a);
	while(a>0)
	{
	a/=10;
	i++;	
	}
	switch (i)
	{
		case 3:
			printf("YES");
			break;
		default:
			printf("NO");
			break;
	}

	return 0;
}

