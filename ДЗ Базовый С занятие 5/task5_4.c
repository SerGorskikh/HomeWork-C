
#include <stdio.h>
 
int main(){
int a,num;
int flag=1;
	scanf("%d", &a);
	while (a > 0)
	{
	num = a % 10;   
		if (num % 2>0)
		{ flag=0;
			printf("NO\n");
			break;
		}                
	a /= 10;
    }  
	if (flag)
	{
	printf("YES\n");
	}
	return 0;
}


