// D8 DZ 2
#include <stdio.h>
 
int print_num(int a,int b)
	{ 
	if (a>b)
		{
		return 0;
		}
	printf("%d ", a);
	a=a+1;
	print_num(a,b);
	return 0;
	}

int print_num_rev(int a,int b)
	{ 
	if (a<b)
		{
		return 0;
		}
	printf("%d ", a);
	a=a-1;
	print_num_rev(a,b);
	return 0;
	}
int main()
{
   int A,B;
    scanf("%d %d", &A,&B);
    if(A<B)
    {
		print_num(A,B);
	}
else{
		print_num_rev(A,B);
	}
} 
