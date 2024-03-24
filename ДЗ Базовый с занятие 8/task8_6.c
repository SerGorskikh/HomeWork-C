/*E9
Циклический сдвиг массива вправо
Считать массив из 10 элементов и выполнить циклический сдвиг ВПРАВО на 1. 

Данные на входе: 		10 целых чисел через пробел 
Данные на выходе: 	10 целых чисел через пробел сдвинутых вправо на 1 элемент циклически 

Пример №1
Данные на входе: 		4 -5 3 10 -4 -6 8 -10 1 0 
Данные на выходе: 	0 4 -5 3 10 -4 -6 8 -10 1 

Пример №2
Данные на входе: 		1 2 3 4 5 6 7 8 9 10 
Данные на выходе: 	10 1 2 3 4 5 6 7 8 9 */
#include <stdio.h>

void aPrint(int *arr, int len)
{
    for (int i = 0; i < len; i++)
		printf("%d ",arr[i]);
}
 
void right_shift_Array(int * array, int len)
{
	int t=array[len-1];
    for (int i = (len-1); i > 0; i--)
		array[i] = array[i-1];   
    array[0] = t;
}
 
int main()
{
enum {aSize = 10};
int array[aSize] = {0};
    for(int i=0; i < aSize; i++)
		scanf("%d", &array[i]);
	right_shift_Array(array, aSize);
	aPrint(array, aSize);
    return 0;
} 
