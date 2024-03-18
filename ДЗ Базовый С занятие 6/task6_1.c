
#include <stdio.h>
 int summ(int a)
	{
		int sum=0;
		for (int i=0;i<a+1;i++)
		{
			sum+=i;
		}
		return sum;
	}
	
int main() 
	{
	 int n;
	scanf("%d", &n);
	printf("%d\n",summ(n));
	return 0;
	}


