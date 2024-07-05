#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
unsigned int year;
int month;
int day;
int hour;
int min;
int t;
} Sensor;

//int Stat_Data[3][12]={0};

int  Read_of_file(const char* filename, Sensor **array);
void Print(Sensor *info, int n);
int Medium_T_for_the_year(Sensor *array, int n);
int Minimum_T_for_the_year(Sensor *array, int n);
int Maximum_T_for_the_year(Sensor *array, int n);
int Medium_by_month(Sensor *array, int n, int m);
int Minimum_by_month(Sensor *array, int n, int m);
int Maximum_by_month(Sensor *array, int n, int m);
void Stat_by_months(Sensor *array, int n,int Stat[3][12]);
void Output_of_the_result(int Stat_D[3][12]);
void Output_of_the_result_month(int Stat_D[3][12], int m);
void print_help(void);
int digit_month(char*arr);