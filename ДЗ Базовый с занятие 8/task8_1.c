/* E3 DZ 1
Среднее арифметическое чисел
Ввести c клавиатуры массив из 5 элементов, найти среднее арифметическое всех элементов массива.
 */
#include <stdio.h>
 
int arith_mean()
	{
	int array[5],sum=0,i;
	for (i=0;i<5;i++) scanf("%d",&array[i]);
	for (i=0;i<5;i++) sum+=array[i];
	printf("%.3f ",sum/5.0);
	return 0;
	}

int main()
	{
	arith_mean();
	return 0;
	
	}

