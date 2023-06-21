/*
 * main.c
 *
 *  Created on: Jun 21, 2023
 *      Author: Khaled
 */
#include "lcd_interfacing.h"
#include "adc_interfacing.h"
#include "voltemeter_cfg.h"
void main()
{

lcd_intilization();
adc_init();
go_to_xy(row1, column2);
lcd_display_string("voltage is =");
while(1)
{

f32 voltage=adc_analoge_read(adc_convert(input_volt_channel),referace_volt);
send_command(LCD_CLEAR);
go_to_xy(row1, column2);
lcd_display_string("voltage is =");
go_to_xy(row2, column2);
LcdDisplayFloat(voltage);
_delay_ms(500);


}



}
