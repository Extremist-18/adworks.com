#include "stm32g071xx.h"
void msdelay(uint32_t value);
uint32_t j = 0;
int main(void)
{
    RCC->IOPENR |= RCC_IOPENR_GPIOAEN;
    RCC->IOPENR |= RCC_IOPENR_GPIOAEN;
    GPIOA->MODER &= 0xFFFFF3FF;
    GPIOA->MODER |= 0x00000400;
    GPIOA->OTYPER = 0;
    GPIOA->OSPEEDR &= 0xFFFFF3FF;
    GPIOA->OSPEEDR |= 0x00000400;
    GPIOA->PUPDR = 0;
    GPIOC->MODER &= 0xF3FFFFFF;
    GPIOC->PUPDR &= 0xF3FFFFFF;
    while (1)
    {
        if (GPIOC->IDR &= 0x00002000 == 0)
            j += 1;
        if (j == 1)
        {
            GPIOA->BSRR = (1 << 5);
            msdelay(500);
            GPIOA->BSRR = (1 << 21);
            msdelay(500);
            j = 0;
        }
        else
        {
            GPIOA->BSRR = (1 << 5);
            msdelay(1000);
            GPIOA->BSRR = (1 << 21);
            msdelay(1000);
            j = 1;
        }
    }
}