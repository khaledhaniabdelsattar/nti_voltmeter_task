/*
 * lm35_interfacing.c
 *
 *  Created on: Jun 17, 2023
 *      Author: Khaled
 */

#include "lm35_interfacing.h"

void lm_35_inti()
{



adc_init();
//adc_selecting_channel( lm_35_channel);
}

f64 lm_35_get_temp()
{
	u16 adc_read;
	f64 temp_read;
	adc_read=adc_convert(lm_35_channel);
	f64 voltage_read=adc_analoge_read(adc_read,5);
    temp_read=((f32)voltage_read)/((f32)0.01);
return temp_read;
}

