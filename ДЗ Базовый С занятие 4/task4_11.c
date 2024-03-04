#include <stdio.h>

int main(void)
{
	int a,b,c;
	printf ("input number:\n");
	scanf("%d %d %d", &a,&b,&c);
	if ((a+b>c)&&(a+c>b)&&(c+b>a))
    {
	printf("YES\n");	 
	}
	else
	{
	printf("NO\n");	
	};
	
	return 0;
}

