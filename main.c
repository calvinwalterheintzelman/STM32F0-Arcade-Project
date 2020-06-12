#include "stm32f0xx.h"
#include "stm32f0_discovery.h"

int col = 0;
int row = 0;

void location(int side, int row, int col, int x, int y, int player);

int player = 0;
int x = 0;
int y = 0;

void location(int side, int row, int col, int x, int y, int player) {
	//side 0 is b, side 1 is a
	switch(x) {
		case 0:
			switch(y) {
				case 0:
					if(((row == 15 && col == 31) || (row == 13 && col == 31) || (row == 13 && col == 30) || (row == 15 && col == 30)) && side == 1) {
						GPIOB->ODR |= 1 << (player + 1);
					}
					break;
				case 1:
					if(((row == 15 && col == 28) || (row == 13 && col == 28) || (row == 13 && col == 27) || (row == 15 && col == 27)) && side == 1) {
						GPIOB->ODR |= 1 << (player + 1);
					}
					break;
				case 2:
					if(((row == 15 && col == 25) || (row == 13 && col == 25) || (row == 13 && col == 24) || (row == 15 && col == 24)) && side == 1) {
						GPIOB->ODR |= 1 << (player + 1);
					}
					break;
				case 3:
					if(((row == 15 && col == 19) || (row == 13 && col == 19) || (row == 13 && col == 18) || (row == 15 && col == 18)) && side == 1) {
						GPIOB->ODR |= 1 << (player + 1);
					}
					break;
				case 4:
					if(((row == 15 && col == 16) || (row == 13 && col == 16) || (row == 13 && col == 15) || (row == 15 && col == 15)) && side == 1) {
						GPIOB->ODR |= 1 << (player + 1);
					}
					break;
				case 5:
					if(((row == 15 && col == 13) || (row == 13 && col == 13) || (row == 13 && col == 12) || (row == 15 && col == 12)) && side == 1) {
						GPIOB->ODR |= 1 << (player + 1);
					}
					break;
				case 6:
					if(((row == 15 && col == 7) || (row == 13 && col == 7) || (row == 13 && col == 6) || (row == 15 && col == 6)) && side == 1) {
						GPIOB->ODR |= 1 << (player + 1);
					}
					break;
				case 7:
					if(((row == 15 && col == 4) || (row == 13 && col == 4) || (row == 13 && col == 3) || (row == 15 && col == 3)) && side == 1) {
						GPIOB->ODR |= 1 << (player + 1);
					}
					break;
				case 8:
					if(((row == 15 && col == 1) || (row == 13 && col == 1) || (row == 13 && col == 0) || (row == 15 && col == 0)) && side == 1) {
						GPIOB->ODR |= 1 << (player + 1);
					}
					break;
			}
			break;
			case 1:
				switch(y) {
					case 0:
						if(((row == 12 && col == 31) || (row == 11 && col == 31) || (row == 12 && col == 30) || (row == 11 && col == 30)) && side == 1) {
							GPIOB->ODR |= 1 << (player + 1);
						}
						break;
					case 1:
						if(((row == 12 && col == 28) || (row == 11 && col == 28) || (row == 12 && col == 27) || (row == 11 && col == 27)) && side == 1) {
							GPIOB->ODR |= 1 << (player + 1);
						}
						break;
					case 2:
						if(((row == 12 && col == 25) || (row == 11 && col == 25) || (row == 12 && col == 24) || (row == 11 && col == 24)) && side == 1) {
							GPIOB->ODR |= 1 << (player + 1);
						}
						break;
					case 3:
						if(((row == 12 && col == 19) || (row == 11 && col == 19) || (row == 12 && col == 18) || (row == 11 && col == 18)) && side == 1) {
							GPIOB->ODR |= 1 << (player + 1);
						}
						break;
					case 4:
						if(((row == 12 && col == 16) || (row == 11 && col == 16) || (row == 11 && col == 15) || (row == 12 && col == 15)) && side == 1) {
							GPIOB->ODR |= 1 << (player + 1);
						}
						break;
					case 5:
						if(((row == 12 && col == 13) || (row == 11 && col == 13) || (row == 11 && col == 12) || (row == 12 && col == 12)) && side == 1) {
							GPIOB->ODR |= 1 << (player + 1);
						}
						break;
					case 6:
						if(((row == 12 && col == 7) || (row == 11 && col == 7) || (row == 11 && col == 6) || (row == 12 && col == 6)) && side == 1) {
							GPIOB->ODR |= 1 << (player + 1);
						}
						break;
					case 7:
						if(((row == 12 && col == 4) || (row == 11 && col == 4) || (row == 11 && col == 3) || (row == 12 && col == 3)) && side == 1) {
							GPIOB->ODR |= 1 << (player + 1);
						}
						break;
					case 8:
						if(((row == 12 && col == 1) || (row == 11 && col == 1) || (row == 11 && col == 0) || (row == 12 && col == 0)) && side == 1) {
							GPIOB->ODR |= 1 << (player + 1);
						}
						break;
				}
				break;
			case 2:
				switch(y) {
					case 0:
						break;
					case 1:
						break;
					case 2:
						break;
					case 3:
						break;
					case 4:
						break;
					case 5:
						break;
					case 6:
						break;
					case 7:
						break;
					case 8:
						break;
				}
				break;
			case 3:
				switch(y) {
					case 0:
						break;
					case 1:
						break;
					case 2:
						break;
					case 3:
						break;
					case 4:
						break;
					case 5:
						break;
					case 6:
						break;
					case 7:
						break;
					case 8:
						break;
				}
				break;
			case 4:
				switch(y) {
					case 0:
						break;
					case 1:
						break;
					case 2:
						break;
					case 3:
						break;
					case 4:
						break;
					case 5:
						break;
					case 6:
						break;
					case 7:
						break;
					case 8:
						break;
				}
				break;
			case 5:
				switch(y) {
					case 0:
						break;
					case 1:
						break;
					case 2:
						break;
					case 3:
						break;
					case 4:
						break;
					case 5:
						break;
					case 6:
						break;
					case 7:
						break;
					case 8:
						break;
				}
				break;
			case 6:
				switch(y) {
					case 0:
						break;
					case 1:
						break;
					case 2:
						break;
					case 3:
						break;
					case 4:
						break;
					case 5:
						break;
					case 6:
						break;
					case 7:
						break;
					case 8:
						break;
				}
				break;
			case 7:
				switch(y) {
					case 0:
						break;
					case 1:
						break;
					case 2:
						break;
					case 3:
						break;
					case 4:
						break;
					case 5:
						break;
					case 6:
						break;
					case 7:
						break;
					case 8:
						break;
				}
				break;
			case 8:
				switch(y) {
					case 0:
						break;
					case 1:
						break;
					case 2:
						break;
					case 3:
						break;
					case 4:
						break;
					case 5:
						break;
					case 6:
						break;
					case 7:
						break;
					case 8:
						break;
				}
				break;
	}
}

static void nano_wait(int t) {
    asm("       mov r0,%0\n"
        "repeat:\n"
        "       sub r0,#83\n"
        "       bgt repeat\n"
        : : "r"(t) : "r0", "cc");
}

int main (void){

	//set up timer 3 channel 1 for PA6, AF1
	RCC->AHBENR |= RCC_AHBENR_GPIOAEN; //turn on gpioa


	RCC->AHBENR |= RCC_AHBENR_GPIOBEN;
	RCC->AHBENR |= RCC_AHBENR_GPIOCEN;
	GPIOB->MODER &= ~GPIO_MODER_MODER12;
	GPIOB->MODER |= GPIO_MODER_MODER12_0;


	GPIOA->MODER &= ~GPIO_MODER_MODER6;
	GPIOA->MODER |= GPIO_MODER_MODER6_0; //set PA6 to OUTPUT
	/*GPIOA->AFR[0] &= ~0x0F000000;
	GPIOA->AFR[0] |= 0x01000000;
	RCC->APB1ENR |= RCC_APB1ENR_TIM3EN;
	TIM3->ARR = 50 - 1; //483 kHz
	//TIM3->CCR1 = 50;
	TIM3->CCMR1 |= TIM_CCMR1_OC1M_1 | TIM_CCMR1_OC1M_0;
	TIM3->CCER |= TIM_CCER_CC1E;
	TIM3->CR1 &= ~TIM_CR1_DIR;
	TIM3->DIER |= TIM_DIER_CC1IE;
	TIM3->DIER |= TIM_DIER_UIE;

	NVIC->ISER[0] = 1 << TIM3_IRQn;
	TIM3->CR1 |= TIM_CR1_CEN; //ENABLE TIMER
*/

	//PB0, PB1, PB2 are r1, g1, b1
	GPIOB->MODER |= GPIO_MODER_MODER0_0 | GPIO_MODER_MODER1_0 | GPIO_MODER_MODER2_0;
	//PA1, PA2, PA3 are r2, g2, b2
	GPIOA->MODER |= GPIO_MODER_MODER1_0 | GPIO_MODER_MODER2_0 | GPIO_MODER_MODER3_0;
	//PC0, PC1, PC2, PC3 are A, B, C, D
	GPIOC->MODER |= GPIO_MODER_MODER0_0 | GPIO_MODER_MODER1_0 | GPIO_MODER_MODER2_0 | GPIO_MODER_MODER3_0;
	//set PA 10 through PA 13 as inputs for buttons.

	/*int player = 1;
	int x = 1;
	int y = 1;*/
	int row;
	int col;
	int counter = 0;
	int side; //side 1 is gpioa, side 0 is gpiob
	while(1)
	{
		if(((GPIOA->IDR & GPIO_IDR_10) == GPIO_IDR_10) && (counter % 90 == 0)){
			y = (y+1) % 8;
		}
		if(counter == 180) {
			counter = 0;
		}
		else {
			counter++;
		}
		for(side = 0; side < 2; side++){
			for(row = 0; row < 16; row++)
			{
				for(col = 0; col < 32; col++) {

					//TILE SET UP
					GPIOB->ODR &= ~0x7;
					GPIOA->ODR &= ~(GPIO_ODR_1) & ~(GPIO_ODR_2) & ~(GPIO_ODR_3); //clear output value
					if((col == 9 || col == 10 || col == 21 || col == 22) && side == 0){
						GPIOB->ODR |= (1 << 1) | (1 << 2);
					}
					if((col == 9 || col == 10 || col == 21 || col == 22) && side == 1){
						GPIOA->ODR |= (1 << 2) | (1 << 3);
					}
					if((row == 15 - 9 || row == 15 - 10) && side == 0){
						GPIOB->ODR |= (1 << 1) | (1 << 2);
					}
					if((row == 9 || row == 10) && side == 1){
						GPIOA->ODR |= (1 << 2) | (1 << 3);
					}
					if((row == 1 || row == 6 || row == 13) && side == 1 && col !=8 && col !=11 && col != 20 && col != 23){ //row 1 is row 2 and vice versa
						GPIOA->ODR |= (1 << 2) | (1 << 3);
					}
					if((row == 14 || row == 9 || row == 2) && side == 0 && col !=8 && col !=11 && col != 20 && col != 23){ //row 1 is row 2 and vice versa
						GPIOB->ODR |= (1 << 1) | (1 << 2);
					}
					if((col == 2 || col == 5 || col == 14 || col == 17 || col == 26 || col == 29) && row !=8 && row !=11){ //row 1 is row 2 and vice versa
						GPIOA->ODR |= (1 << 2) | (1 << 3);
					}
					if((col == 2 || col == 5 || col == 14 || col == 17 || col == 26 || col == 29) && row !=7 && row !=4){
						GPIOB->ODR |= (1 << 1) | (1 << 2);
					}
					//TILE SET UP^^

					//MAKE GREEN SQUARE BLINK
					//if(counter > 90){
						location(side, row, col, x, y, player);
					//}
					//

				GPIOA->ODR |= 1 << 6; //SET CLOCK HIGH
				//nano_wait(1000);  //hold new data
				GPIOA->ODR &= ~(1 << 6); //SET CLOCK LOW
				//nano_wait(1000); //hold

			}
			//set latch output to high then low

			GPIOB->ODR |= 1 << 12; //SET LATCH HIGH
			//nano_wait(10000);
			GPIOB->ODR &= ~(1 << 12); //SET LATCH LOW

			//row coordinates
			GPIOC->ODR ^= 1 << 0;
			if(row % 2 == 0) {
				GPIOC->ODR ^= 1 << 1;
			}
			if(row % 4 == 0) {
				GPIOC->ODR ^= 1 << 2;
			}
			if(row % 8 == 0) {
				GPIOC->ODR ^= 1 << 3;
			}
			//
		}
	}
}

	/*int p = 500000; //pitch
	int n = 500000000; //length o f quarter note

	int C5 = 1/523.251*p;
	int D5 = 1/587.330*p;
	int E5 = 1/659.255*p;
	int F5 = 1/698.456*p;
	int G5 = 1/783.991*p;
	int A5 = 1/880.0*p;
	int B5 = 1/987.767*p;
	int C6 = 1/1046.5*p;
	int D6 = 1/1174.66*p;

	RCC->AHBENR |= RCC_AHBENR_GPIOBEN;
	RCC->APB1ENR |= 1; //ENABLES TIM2

	GPIOB->MODER &= ~0x000000C0; //PC3
	GPIOB->MODER |= 0x00000080;
	GPIOB->AFR[0] &= ~0x0000F000;
	GPIOB->AFR[0] |= 0x00002000;

	TIM2->ARR = 100 - 1;
	TIM2->CCER |= TIM_CCER_CC2E;
	TIM2->CCR2 = 50;
	TIM2->CCMR1 |= TIM_CCMR1_OC2M_1 | TIM_CCMR1_OC2M_0;
	TIM2->CR1 &= ~TIM_CR1_DIR;

	TIM2->CR1 |= TIM_CR1_CEN;
	while(1)
	{
		TIM2->PSC = B5;
		nano_wait(2*n);
		TIM2->PSC = D6;
		nano_wait(n);
		TIM2->PSC = A5;
		nano_wait(2*n);
		TIM2->PSC = G5;
		nano_wait(n/2);
		TIM2->PSC = A5;
		nano_wait(n/2);
	}*/
}

/*void TIM3_IRQHandler(void) {

	GPIOB->ODR &= ~(1<<12);
	//OE PIN IS ACTIVE LOW, high when switch rows, low otherwise
	++x;
	if(x == 24)
	{
		x = 0;
		++col;
		if(col == 32)
		{
			//latch here
			GPIOB->ODR |= 1 << 12;
			//^^latch here^^

			col = 0;
			++row;
			if(row == 32)
			{
				row = 0;
			}
		}
	}
}*/
