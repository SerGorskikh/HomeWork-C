// D11 DZ 2
#include <stdio.h>
 
 
int get_bin(int n) 
	{
	static int s;
		if (n >1)
	get_bin(n / 2);
	s+=n%2;
	return s; 
	}
 
int main()
{
int n;
    scanf("%d", &n);
    printf("%d", get_bin(n));
	return 0;
}


