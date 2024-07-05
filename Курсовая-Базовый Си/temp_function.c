#include"temp_function.h"

int  Read_of_file(const char* filename, Sensor **array){
FILE *fp;
	fp = fopen(filename, "r"); // "example.csv"
	if (!fp)
	{
		printf("file is not open\n");
		return -1;
	}
	char buff[256];
	//int numErrorLine = 0;
	 int numRecord = 0;
	while(fgets(buff, sizeof(buff), fp)) 
		{
			Sensor buff_Record;
			if(sscanf(buff, "%d;%d;%d;%d;%d;%d", 
             &buff_Record.year, &buff_Record.month, &buff_Record.day,
             &buff_Record.hour, &buff_Record.min, &buff_Record.t) == 6)
             {
				 (*array) = realloc(*array, sizeof(Sensor)*(numRecord+1));
				    if(!(*array))
				     { 
					printf("Memory allocation error\n"); 
					fclose(fp); 
					return -1;
					}
				(*array)[numRecord] = buff_Record;
				numRecord++; 
			}
			else
			{
				printf("===================================================================================\n");
				printf(" 				In Line %d Error %s", numRecord + 1, buff);       
				printf("===================================================================================\n");
			}
		}
	fclose(fp);
	return numRecord;
}

void Print(Sensor *info, int n){
printf("===================================================================================\n");        
    for(int i=0;i<n;i++)
        printf("%04d-%02d-%02d-%02d-%02d t=%3d\n",    
            info[i].year,
            info[i].month,
            info[i].day,
            info[i].hour,
            info[i].min,
            info[i].t
        );
}
int Medium_T_for_the_year(Sensor *array, int n)
{
	int  medium, sum =0;
	for (int i=0; i<n; i++)
	{
		sum +=array[i].t;
	}
	return medium = sum/n;
}

int Minimum_T_for_the_year(Sensor *array, int n)
{
	int  min=array[0].t;
	for (int i=1; i<n; i++)
	{
		if(min > array[i].t) min = array[i].t;
	}
	return min;
}
int Maximum_T_for_the_year(Sensor *array, int n)
{
	int  max=array[0].t;
	for (int i=1; i<n; i++)
	{
		if(max < array[i].t) max = array[i].t;
	}
	return max;
}



int Medium_by_month(Sensor *array, int n, int m)
{
	int sum = 0;
	int count=0;
	for(int i=0; i<n; i++)
	{
		if(array[i].month == m)
		{
			sum += array[i].t;
			count++;
		}
	
	}
	return sum/count;
}


int Minimum_by_month(Sensor *array, int n, int m)
{
	int min = 99;
	for(int i=0; i<n; i++)
	{
		if(array[i].month == m)
		{
			if(min > array[i].t)
			{
				 min = array[i].t;
			}
		}
	}
	return min;
}
int Maximum_by_month(Sensor *array, int n, int m)
{
	int max = -99;
	for(int i=0; i<n; i++)
	{
		if(array[i].month == m)
		{
			if(array[i].t > max )
			{
				 max = array[i].t;
			}
		}
	}
	return max;
}


void Stat_by_months(Sensor *array, int n,int Stat[3][12])
{
	for (int i=1; i<13; i++)
	{
		Stat[0][i-1] = Minimum_by_month(array, n, i);
		Stat[1][i-1] = Medium_by_month(array, n, i);
		Stat[2][i-1] = Maximum_by_month(array, n, i);
	}
}

void Output_of_the_result(int Stat_D[3][12])
{
	printf("Month	Minimun t of month	Mediumun t of month 	Maximun t of month\n");
	
	for (int i=1; i<13; i++)
	{
		printf("%3d	%9d	%18d 	%18d\n", i ,Stat_D[0][i-1],Stat_D[1][i-1],Stat_D[2][i-1]);
		
	}
	printf( "=================================================================================== \n ");
}

void Output_of_the_result_month(int Stat_D[3][12], int m)
{
	printf("			 Statistic of month number %d\n", m);
	printf( "=================================================================================== \n ");
	printf("Month	Minimun t of month	Mediumun t of month 	Maximun t of month\n");
	printf("%18d %23d  %23d\n",Stat_D[0][m-1],Stat_D[1][m-1],Stat_D[2][m-1]);
	printf( "=================================================================================== \n ");
}
void print_help(void)
{
	printf("\nProgram information:\n");
	printf("-h for help.\n");
	printf("-f <filename.csv> Enter the name of the source file after <-f>.\n");
	printf("-m <month number> Enter the number of month after <-m>.\n");
}

int digit_month(char*arr)
{
int sum=0;
for (int i=0; arr[i] != '\0'; i++) sum+=arr[i];
sum-=48;
if (sum <10)
{
 return sum;
}
else
{
return(sum-39);
}
}