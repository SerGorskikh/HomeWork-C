/*G4 ДЗ 1
По одному разу
В файле .txt даны два слова не более 100 символов каждое, разделенные одним пробелом. Найдите только те символы слов, которые встречаются в обоих словах только один раз. Напечатайте их через пробел в файл .txt в лексикографическом порядке. 

Данные на входе: 		Два слова из маленьких английских букв через пробел. Длинна каждого слова не больше 100 символов. 
Данные на выходе: 	Маленькие английские буквы через пробел. 

Пример №1
Данные на входе: 		hello world 
Данные на выходе: 	o 


Данные на входе: 		aabcd bcef 
Данные на выходе: 	b c */
#include <stdio.h>
#include <string.h>
 

void Print_Arr(char a[],int n);
void Create_file();
void Read_f(char arr[],int n);
int Pos_space(char arr[],int n);
void Sort_c(char arr[],char arr_out[], int n, int p);


int main(void)
{
	enum  {SIZE = 20};
	char Buff[SIZE]={0};
	char Arr_out[SIZE]={0};
	int pos_s;      //  позиция пробела
	Create_file(); //создаем файл ttt.txt и текст в нем
	Read_f(Buff,SIZE);  // читаем строку из файла в буфферный массив
	//Print_Arr(Buff,SIZE);
	pos_s=Pos_space(Buff,SIZE);// определяем позицию пробела
	Sort_c(Buff,Arr_out, SIZE, pos_s); //сортировка строки по задаче и вывод результата
}


void Sort_c(char arr[],char arr_out[], int n, int p)
{
	char buffer[n];
	int k=0;
	
	for(int i=0; i<p; i++)
	{	int count=0;
		for(int j=0; j<p; j++)
		{
			if (arr[i]==arr[j]) count++;
		}
		if (count==1) buffer[k++]=arr[i];
	}
	buffer[k]='\0';
		int l=0;
		for(int i=0; i<k; i++)
	{	int count=0;
		for(int j=p+1; j<n; j++)
		{
			if (buffer[i]==arr[j]) count++;
		}
		if (count==1) arr_out[l++]=buffer[i];
	}
	Print_Arr(arr_out,k);
}


int Pos_space(char arr[],int n)
{
	for (int i=0; i<n;i++)
		if(arr[i]==' ') return i;
}

void Print_Arr(char a[],int n)
{
	for (int i=0; i<n; i++) printf("%c", a[i]);
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
		while(fgets(arr,20,fp) != NULL);
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

