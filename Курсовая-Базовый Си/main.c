
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
//#include <unistd.h>
//#include <getopt.h>
#include "temp_function.h"

int Stat_Data[3][12]={0};

int main(int argc, char **argv)
{
	char *file_name;
	char *month ={0};
	if(argc == 0)
	{
		print_help();
		return 0;
	}


	for(int i=1; i<argc; i++)
	{
        char *a = argv[i];
		if (a[1] == 'h')
		{
			print_help();
		}
		if (a[1] == 'f')
		{
			i++;
			file_name = argv[i];
			//printf("%s\n",file_name);
		}
		if (a[1] == 'm')
		{
			i++;
			month = argv[i];
			//printf("%s\n",month);
		}
		else 
		{
			month ="0";
		}
	}
	int mon=digit_month(month);
	Sensor *info = NULL;
	int numb = Read_of_file(file_name, &info);
	//printf("number str = %d\n",numb);
	//Print(info, numb);
	Stat_by_months(info, numb, Stat_Data);
	if (mon != 0)
	{
	Output_of_the_result_month(Stat_Data, mon);
	}
    else
	{
	Output_of_the_result(Stat_Data);		
	}
	
	//printf("=================================================================================== \n ");
	printf( "Minimum anual temperature   Medium anual temperature    Maximum anual temperature \n ");
	printf("		%d			%d			%d\n",Minimum_T_for_the_year(info, numb), Medium_T_for_the_year(info, numb), Maximum_T_for_the_year(info, numb));
	printf( "=================================================================================== \n ");

	return 0;
}


