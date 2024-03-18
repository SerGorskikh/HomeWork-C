
#include <stdio.h>
unsigned int summ(int a)
	{
		int sum=1;
		for (int i=1;i<a;i++)
		{
			sum*=2;
		}
		return sum;
	}
	
int main() 
	{
	 int n;
	scanf("%d", &n);
	printf("%u\n",summ(n));
	return 0;
	}



