#include <stdio.h>
void recur(int n)
	{
	if(n>0){
		printf("%d ",n%10);
		recur(n/10);
	 }
	
	}

int main()
	{
	int n;
	scanf("%d",&n);
	recur(n);
	return 0;
	}

