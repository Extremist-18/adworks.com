LCD Display Program

#include "stm32g071xx.h"

	void LCD_init(void);

void LCD_cmd(unsigned int comd);
void LCD disp(unsigned char char1);

	void msdelay(uint32_t value);
	int main(void){
	unsigned char msg1[16] = "Dept of EC" unsigned char msg2[16] = "SVNIT" ;

	uint8_t LCD_Init();
		. // Initialize LCD

	LCD_cmd(0x38); // 8-bit mode, 2 line, 5x7 dots LCD_cmd(0x0E): // display on, cursor on

LCD_cmd(0x06) : // auto increment cursor LCD cmd (0x01); // clear display screen

				LCD_cmd(0x80),

				for (j = 0; j < 16; ++)
{
}

LCD disp(msg10) :

				  LCD_cmd(0xC0);

for (j = 0; j < 16; ++i)
	;
LCD disp(msg20) :

				  void LCD_init(void)
{

	// Enable clock for Port A and B RCC->1OPENR |= RCC_IOPENR_GPIOAEN

	RCC->IOPENR |= RCC_IOPENR_GPIOBEN;
	GPIOA_OTYPER &= 0xFFFFFF1F : // use pull-push type GPIOB>PUPDR &= 0xFFFF03FF://No pull up, no pull down

		 // set pin 5,6 and 7 of port A as output mode (pull-push)

		
		   GPIOA_MODER &= 0xFFFF03FF : clear required field GPIOA - MODER |= 0x00005400 : set required bits

		// set pins 0 to 7 of port B as output GPIOB-MODER &= 0xFFFF0000

		// clear required field GPIOB-MODER |= 0x00005555 // set required bits GPIOB->OTYPER &= 0xFFFFFF00; // use pull-push type

					GPIOB->PUPDR &= 0xFFFF0000; // No pull up, no pull down GPIOA->ODR = GPIOA->ODR & 0xFFBF: //PA6 (R/W) low
}
	void LCD_cmd(unsigned int comd)
	{

		GPIOB->ODR = GPIOB->ODR & 0xFF00 :

			GPIOB->ODR = GPIOB->ODR | comd; // send command GPIOA->ODR GPIOA->ODR & 0xFF7F; // RS=0 on pin PA7

		msdelay(1);

		GPIOA ODR = GPIOA ODR & 0xFFDF; // EN=0 on pin PA5

		msdelay(50);
	}



	void LCD disp(unsigned char chart)
	{
		GPIOA->ODR = GPIOA->ODR & 0x0080; // RS-1 on pin PA7 msdelay(1); GPIOA->ODR = GPIOA->ODR & 0xFFDF; // EN=0 on pin PA5 msdelay (50); }

		GPIOA->ODR = GPIOA->ODR | 0x0020; // EN=1 on pin PA5

		GPIOB->ODR = GPIOB->ODR & 0xFF00 : GPIOB->ODR GPIOB->ODR | char1 : // send ascii code

		GPIOA->ODR = GPIOA->ODR | 0x0020; // EN=1 on pin PAS

		
		
		
		
		
		void msdelay(uint32_t value)
		{

			long int loops;
			loops 850 "value" 4;
			while (loops--)
			{
			}

			Serial communication is slower but reduces number of wires
		}