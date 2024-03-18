
#include <stdio.h>
 int is_happy_number(int n)
	{
	int sum=0, mul_plic=1,rem=n;
	while (n>0)
		{
		rem=n%10;
		sum+=rem;
		mul_plic*=rem;
		n/=10;
		//printf("%d %d %d %d\n",rem,sum,mul_plic,n);
		}
	(sum==mul_plic)?printf("YES\n"):printf("NO\n");
	return 0;
	 }
int main(){
	int b;
	scanf("%d", &b);
	is_happy_number(b);
	return 0;
}


