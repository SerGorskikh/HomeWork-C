/*F5 ДЗ 3
Максимум в массиве
Написать функцию и программу, демонстрирующую работу данной функции, которая находит максимальный элемент в массиве. 

Прототип функции:
int find_max_array(int size, int a[])

Данные на входе: 		Массив состоящий из целых чисел. Первый аргумент, размер массива, второй аргумент адрес нулевого элемента. 
Данные на выходе: 	Одно целое число 

Пример №1
Данные на входе: 		773 307 371 548 531 765 402 27 573 591 217 859 662 493 173 174 125 591 324 231 130 394 573 65 570 258 343 3 586 14 785 296 140 726 598 262 807 794 510 465 66 895 182 218 302 34 205 252 687 660 952 737 2 32 310 680 36 139 346 139 489 217 767 544 158 774 883 154 802 136 569 377 867 423 224 176 118 660 513 734 45 978 983 749 909 601 270 147 433 737 789 304 842 769 815 503 190 399 3. 
Данные на выходе: 	983 */
#include <stdio.h>


int find_max_array(int a[], int size)
{	int max=a[0];
	for (int i=1; i<size; i++)
	{
		(a[i]>max)?(max=a[i]):(max=max);
	}
	return max;
}


int isDigit(char c)
{
	return ((c>='0')&&(c<='9'));
}

void Print(int arr[], int len)
{
	for (int i = 0; i < len; i++)
		printf("%d ",arr[i]);
	printf("\n");
}

int InputGet(int arr[], int n)
{
int i;
char c;
	while((c=getchar())!='\n')
	{
		if(isDigit(c))
		{
			int number=0;
			do
			{
				number=number*10+c-'0';
				c=getchar();
			}
			while(isDigit(c));
			arr[i++] = number;
			if(c=='\n')
				break;
		}
	}
	return i;
}


int main()
{
enum {BUFFER_SIZE = 20};
int buffer[BUFFER_SIZE];
int size = InputGet(buffer,BUFFER_SIZE);
	printf("%d\n", find_max_array(buffer, size));
	return 0;
}
