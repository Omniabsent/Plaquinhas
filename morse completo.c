#include "stm8s.h"
char flagTimer = 0;
int cont=0;

void timeshort (void){
	while (cont<=42){
		if(flagTimer){
			cont++;
			flagTimer=0;
		}
	}
	cont=0;
}

void timelong (void){
	while (cont<=125){
		if(flagTimer){
			cont++;
			flagTimer=0;
		}
	}
	cont=0;
}


void curto (void){
	timeshort();
	GPIO_WriteReverse(GPIOD, GPIO_PIN_0);	
	timeshort();
	GPIO_WriteReverse(GPIOD, GPIO_PIN_0);	
}

void longo (void){
	timeshort();
	GPIO_WriteReverse(GPIOD, GPIO_PIN_0);	
	timelong();
	GPIO_WriteReverse(GPIOD, GPIO_PIN_0);	
}


void codigoMorse (const unsigned char *texto){
	while(*texto){
		switch (*texto){
			case (' '):
				timelong();
			break;
			case ('A'): //.-
				curto();
				longo();
				timeshort();
			break;
			case ('B'): //-...
				longo();
				curto();
				curto();
				curto();
				timeshort();
			break;
			case ('C'):  //-.-.	
				longo();
				curto();
				longo();
				curto();
				timeshort();
			break; 
			case ('D'): //-..
				longo();
				curto();
				curto();				
				timeshort();
			break;
			case ('E'): //.
				curto();
				timeshort();
			break;
			case ('F'):  //..-. 
				curto();
				curto();
				longo();
				curto();
				timeshort();
			break;
			case ('G'): //--.
				longo();
				longo();
				curto();
				timeshort();
			break;
			case ('H'): //....
				curto();
				curto();
				curto();
				curto();
				timeshort();
			break;
			case ('I'):  //..
				curto();
				curto();
				timeshort();
			break; 
			case ('J'): //.---
				curto();
				longo();
				longo();
				longo();
				timeshort();
			break;
			case ('K'): //-.-
				longo();
				curto();
				longo();
				timeshort();
			break;
			case ('L'): //.-..
				curto();
				longo();
				curto();
				curto();
				timeshort();
			break;
			case ('M'): //--
				longo();
				longo();
				timeshort();
			break;
			case ('N'): //-.
				longo();
				curto();
				timeshort();
			break;
			case ('O'): //---
				longo();
				longo();
				longo();
				timeshort();
			break;
			case ('P'): //.--.
				curto();
				longo();
				longo();
				curto();
				timeshort();
			break;
			case ('Q'): //--.-
				longo();
				longo();
				curto();
				longo();
				timeshort();
			break;
			case ('R'): //.-.
				curto();
				longo();
				curto();
				timeshort();
			break;
			case ('S'): //...
				curto();
				curto();
				curto();
				timeshort();
			break;
			case ('T'): //--
				longo();
				longo();
				timeshort();
			break;
			case ('U'): //..-
				curto();
				curto();
				longo();
				timeshort();
			break;
			case ('V'): //...-
				curto();
				curto();
				curto();
				longo();
				timeshort();
			break;
			case ('W'): //.--
				curto();
				longo();
				longo();
				timeshort();
			break;
			case ('X'): //.--.
				curto();
				longo();
				longo();
				curto();
				timeshort();
			break;
			case ('Y'): //-.--
				longo();
				curto();
				longo();
				longo();
				timeshort();
			break;
			case ('Z'): //--..
				longo();
				longo();
				curto();
				curto();
				timeshort();
			break;
		} 
	*texto++;
	}
}

int main( void ){

	CLK_DeInit ();
	CLK_HSICmd(ENABLE);
	CLK_HSIPrescalerConfig(CLK_PRESCALER_HSIDIV8);
	//CLK_SYSCLKConfig(CLK_PRESCALER_CPUDIV1);
	CLK_PeripheralClockConfig(CLK_PERIPHERAL_TIMER4, ENABLE);

	TIM4_DeInit();
	TIM4_TimeBaseInit(TIM4_PRESCALER_128, 128);  //onda completa 16ms, 8 on 8 off
	TIM4_Cmd(ENABLE);
	TIM4_ITConfig(TIM4_IT_UPDATE, ENABLE);

    GPIO_DeInit (GPIOB);
    GPIO_Init(GPIOD, GPIO_PIN_0, GPIO_MODE_OUT_PP_LOW_FAST); //LED   
    GPIO_Init(GPIOB, GPIO_PIN_7, GPIO_MODE_IN_PU_IT);  //BOTÃO     
	enableInterrupts();
	
	while(1){	
		GPIO_WriteHigh(GPIOD, GPIO_PIN_0);		
		codigoMorse(" IFC TESTE ");
	}
}
	
	


#ifdef USE_FULL_ASSERT
void assert_failed(uint8_t* file, uint32_t line){
while(1){}
}
#endif