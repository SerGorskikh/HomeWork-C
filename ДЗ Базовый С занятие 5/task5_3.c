
#include <stdio.h>
 
int main(){
int a, other_nums, num;
int b=0;
	scanf("%d", &a);
	while (a > 0)
	{
	num = a % 10;
	other_nums = a / 10;    
		if (num == other_nums % 10)
		{
			printf("YES\n");
			b=1; 
			break;
		}                
		a /= 10;
    }  
	if (b==0)
	{
	printf("NO\n");
	}
	return 0;
}

