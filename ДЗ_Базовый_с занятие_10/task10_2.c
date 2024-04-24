/*
G5 ДЗ 2
Заменить a на b
В файле .txt дана символьная строка не более 1000 символов. Необходимо заменить все буквы "а" на буквы "b" и наоборот, как заглавные, так и строчные. Результат записать в .txt. 

Данные на входе: 		Строка из маленьких и больших английских букв, знаков препинания и пробелов. 
Данные на выходе: 	Строка из маленьких и больших английских букв, знаков препинания и пробелов. 

Пример
Данные на входе: 		aabbccddABCD 
Данные на выходе: 	bbaaccddBACD 

*/

#include <stdio.h>
#include <string.h>
 

void Print_Arr(char a[],int n);
void Create_file();
void Read_f(char arr[],int n);
void Replacing_char(char arr[],char arr_out[], int n);

int main(void)
{
	enum  {SIZE = 20};
	char Buff[SIZE]={0};
	char Arr_out[SIZE]={0};
	Create_file();//создаем файл ttt.txt и текст в нем
	Read_f(Buff, SIZE); 
	Replacing_char(Buff, Arr_out, SIZE);
	Print_Arr(Buff,SIZE);
	Print_Arr(Arr_out,SIZE);
}

void Replacing_char(char arr[], char arr_out[], int n)
{
	for(int i=0;i<n;i++)
	{
		(arr[i]=='a')?(arr_out[i]='b'):(arr_out[i]=arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]=='b') (arr_out[i]='a');
	}
		for(int i=0;i<n;i++)
	{
		if(arr[i]=='B') (arr_out[i]='A');
	}
		for(int i=0;i<n;i++)
	{
		if(arr[i]=='A') (arr_out[i]='B');
	}
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
