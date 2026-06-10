// Function definition.

#include  "lcd.h"
#include "delay.h"
#include "lcd_defines.h"

void RetroTech(void)
{
	  Setcursor(1,4);
	  StrLCD("RetroTech");
	  Setcursor(2,2);
	  StrLCD("Welcomes you.");
	  delay_Ms(300);
	  CmdLCD(CLEAR_LCD);
}
