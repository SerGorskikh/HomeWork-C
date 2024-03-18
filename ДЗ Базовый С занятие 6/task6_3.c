#include <stdio.h>

int nod(int a,int b)
	{
		int t;
		while (b != 0) 
		{
			t = b;
			b = a % b;
			a = t;
		}
    return a;
}

int main() 
	{
	 int x,y;
	scanf("%d %d", &x,&y);
	printf("%d \n",nod(x,y));
	return 0;
	}

