
#pragma once
#include <stdint.h>
#include <stdio.h>

struct
{
	uint16_t year;
	uint8_t month;
	uint8_t day;
	uint8_t hour;
	uint8_t minute;
	int8_t temperature;
}temp_Data;

void Month_Stat_average (temp_Data arrSensor[], uint8_t month); 
void Month_Stat_minim (temp_Data arrSensor[], uint8_t month);
void Month_Stat_maxim (temp_Data arrSensor[], uint8_t month); 
void Year_Stat_average (temp_Data arrSensor[], uint16_t year);
void Year_Stat_minin (temp_Data arrSensor[], uint16_t year);
void Year_Stat_max (temp_Data arrSensor[], uint16_t year);
