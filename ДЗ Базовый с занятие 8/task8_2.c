/*E2
Найти минимум
Ввести c клавиатуры массив из 5 элементов, найти минимальный из них. 

Данные на входе: 		5 целых чисел через пробел 
Данные на выходе: 	Одно единственное целое число 

Пример №1
Данные на входе: 		4 15 3 10 14 
Данные на выходе: 	3 

Пример №2
Данные на входе: 		1 2 3 4 -5 
Данные на выходе: 	-5 */
#include <stdio.h>
 
int Input(int arr[5])
	{
	int i;
	for (i=0;i<5;i++) scanf("%d",&arr[i]);
	return 0;
	}
	
int Min(int arr[5])
	{
	int min=arr[0],i;
	for(i=1;i<5;i++)
		if(min>arr[i])
			min=arr[i];
	return min;
	}
	
int main()
	{
	int Array[5];
	Input(Array);
	printf("%d\n", Min(Array));
	return 0;
	}
