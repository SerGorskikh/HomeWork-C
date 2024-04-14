/*F14
Сумма в интервале
Написать функцию и программу, демонстрирующую работу данной функции, которая возвращает сумму элементов в заданном отрезке [from, to] для массива. Прототип функции
int sum_between_ab(int from, int to, int size, int a[]) 

Данные на входе: 		Функция принимает концы отрезка from и to, размер массива, массив целых чисел 
Функция возвращает сумму элементов в интервале [from, to] 

Пример №1
Данные на входе: 		4 6 1 2 3 4 5 6 7 8 9 10 
Данные на выходе: 	15 

Пример №2
Данные на входе: 		6 4 1 2 3 4 5 6 7 8 9 10 
Данные на выходе: 	15 

Примечание — Интервал 4 6 числа 4 5 6 к-во 3 сумма 15
*/
#include <stdio.h>
//char *From = "Enter the first element of the array in which you want to sum the elements"
//char *To = "Enter the second element of the array in which you want to sum the elements"
int Interval()
{
	int a;
	scanf("%d",&a);
	return a;
}
int sum_between_ab(int from, int to, int size, int a[])
{
	int sum=0;
	for(int i=from;i<to+1; i++)
		sum+=a[i];
	return sum;
} 

int isDigit(char c)
{
	return ((c>='0')&&(c<='9'));
}

void Print(int len,int arr[])
{
	for (int i = 0; i < len; i++)
		printf("%d ",arr[i]);
	printf("\n");
}

int InputGet(int n,int arr[])
{ 
printf("Enter an array of numbers\n");
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
	int size = InputGet(BUFFER_SIZE,buffer);
	printf("	size=%d\n", size);
	printf ("Enter the first element of the array in which you want to sum the elements\n" );
	int f = Interval();
	printf ("Enter the second element of the array in which you want to sum the elements\n" );
	int t = Interval();
	printf("%d\n", sum_between_ab(f, t, size, buffer));
	return 0;
}
