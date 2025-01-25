//   Группа Д01-021 Горских Сергей Иванович

/*Задача 1-2-Шифр Цезаря 
На стандартном потоке ввода задается целое неотрицательное число N
и последовательность допустимых символов в кодировке ASCII, оканчивающаяся
точкой. Допустимые символы - латинские буквы 'a' ... 'z', 'A' ... 'Z' и
пробел. Требуется закодировать латинские буквы ('a' ... 'z', 'A' ... 'Z')
шифром Цезаря, пробелы вывести без изменения. Число N задает сдвиг в шифре.
Шифр Цезаря заключается в следующем преобразовании. Пусть буквы алфавита 
пронумерованы от 0 до K - 1, где K - число символов в алфавите. Тогда символ 
с номером n кодируется символом с номером p = (n + N)
mod K (mod - операция взятия остатка). На стандартном потоке вывода напечатать
зашифрованное сообщение, оканчивающееся точкой. Преобразование требуется
выполнять независимо для заглавных и строчных латинских букв.
Указание: использовать массивы запрещается.

Пример №1
Данные на входе:	0 Hello World.
Данные на выходе:	Hello World.
Пример №2
Данные на входе:	1 Aa.
Данные на выходе:	Bb.
Пример №3
Данные на входе:	3 ppc.
Данные на выходе:	ssf.

*/


#include <stdio.h>

int main()
{
    int N;
    char ch;
    scanf("%d", &N);
    while ((ch = getchar()) != '.')
    {  
        if (ch >= 'a' && ch <= 'z')
        {
            ch = (ch - 'a' + N) % 26 + 'a';  //шифруем 'a' ... 'z' 
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            ch = (ch - 'A' + N) % 26 + 'A'; //шифруем  'A' ... 'Z' 
        }
        printf("%c", ch);
    }
    printf(".\n");
    return 0;
}

