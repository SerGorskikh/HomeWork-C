/*G8 ДЗ 3
Числа в массив
В файле .txt дана строка, не более 1000 символов, содержащая буквы, целые числа и иные символы. Требуется все числа, которые встречаются в строке, поместить в отдельный целочисленный массив. Например, если дана строка "data 48 call 9 read13 blank0a", то в массиве числа 48, 9, 13 и 0. Вывести массив по возрастанию в файл .txt. 

Данные на входе: 		Строка из английских букв, цифр и знаков препинания 
Данные на выходе: 	Последовательность целых чисел отсортированная по возрастанию 

Пример
Данные на входе: 		data 48 call 9 read13 blank0a 
Данные на выходе: 	0 9 13 48 
*/

#include <stdio.h>
#include <string.h>
 

void Print_Arr(char a[],int n);
void Create_file();
void Read_f(char arr[],int n);
int Sort_digit(char arr_in[],int m,  int arr_out[],int n);
void Print_Arr_Dig(int a[],int n);
void Sort_odd(int arr[],int n);

int main(void)
{
	enum  {SIZE = 30};
	char Buff[SIZE]={0};
	int len;
	int Arr_out[len];
	Create_file();            //создаем файл ttt.txt и текст в нем
	Read_f(Buff, SIZE);       //читаем из файла строку
	//Print_Arr(Buff,SIZE);     //печатаем, что пришло из файла для контроля
	len = Sort_digit(Buff,SIZE, Arr_out, SIZE);  //выбираем числовые симолы и формируем масив чисел, возвращаем количество элементов полученого массива
	Sort_odd(Arr_out,len);               //сортируем по возрастанию и выводим на печать
}


void Sort_odd(int arr[],int n)
{
	int i, j;
    for(i = 0 ; i < n - 1; i++) { 
       for(j = 0 ; j < n - i - 1 ; j++) {  
           if(arr[j] > arr[j+1]) {            
              int tmp = arr[j];
              arr[j] = arr[j+1] ;
              arr[j+1] = tmp; 
           }
        }
    }
    for(int i=0; i<n; i++) printf("%d ",arr[i]);
 }
 
 
int isDigit(char c)
{
	return ((c>='0')&&(c<='9'));
}

int Sort_digit(char arr_in[],int m,  int arr_out[],int n)
{ 
	int i=0, j=0;
	int number=0;
	for(i=0; i<m-1; i++)
	{
		if(isDigit(arr_in[i]))
		{
			number=number*10 + (arr_in[i])-'0';
			if(! isDigit(arr_in[i+1]))
			{
				arr_out[j++]=number;
				number=0;
				i++;
			}
		}
	}
	return j;
}


void Print_Arr(char a[],int n)
{
	for (int i=0; i<n; i++) printf("%c", a[i]);
}

void Print_Arr_Dig(int a[],int n)
{
	for (int i=0; i<n; i++) printf("%d", a[i]);
}


void Read_f(char arr[], int n)
{
FILE *fp;
	char f_name[20];
	
	puts("Enter name of file: ");
	scanf("%s",f_name);
	fp = fopen(f_name,"r");
	if (fp != NULL)
	{
		int size; 
		fseek (fp, 0, SEEK_END);
		size = ftell (fp);
		printf("%d \n",size);
		//fseek (fp, 0, SEEK_SET); //работает также как следующая команда, но rewind() обнуляет и ошибки
		rewind(fp);
		while(fgets(arr,size+1,fp) != NULL);
	}
	else
	{
		printf("file is not open\n");
	}
	fclose(fp);
	printf("file is closed\n");
}

void Create_file()
{
	printf("Enter the text for the file:\n ");
	char str[50],c;
	int i;
	while ((c=getchar())!='\n')
		str[i++]=c;
	str[i]='\0';
	printf("%s\n",str); 

FILE *f;
	char f_name[20];
	printf("Enter name of file: ");
	scanf("%s",f_name);
	f = fopen(f_name,"w");
	if (f != NULL)
	{
		printf("file is open\n");
		fprintf (f, "%s", str);
	}
	else
	{
		printf("file is not open\n");
	}
	fclose(f);
	printf("file is closed\n");
}
