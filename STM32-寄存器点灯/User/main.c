#include "stm32f10x.h"                  // Device header

int main(void)
{
	RCC->APB2ENR = 0x00000010;
	GPIOF->CRH = 0x00300000;
	GPIOF->ODR = 0x00000200;
	while(1)
	{
		
	}
}
