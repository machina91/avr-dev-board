/*
 * globals.h
 *
 * Created: 6/16/2015 11:55:44 PM
 *  Author: Lazar
 */ 


#ifndef GLOBALS_H_
#define GLOBALS_H_

#ifndef F_CPU
#define	F_CPU			8000000UL
#endif

#define USART_BUFFER_SIZE 1024

extern volatile char usart_buff[USART_BUFFER_SIZE];
extern volatile int curr_buffer_size;

#endif /* GLOBALS_H_ */