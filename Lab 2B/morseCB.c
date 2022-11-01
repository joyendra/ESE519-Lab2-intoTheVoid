/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stdio.h>
#include <stdlib.h>

#include "pico/stdlib.h"
#include "hardware/pio.h"
#include "hardware/clocks.h"
#include "ws2812.pio.h"
#include "C:\Users\Admin\OneDrive\Desktop\PennRelated\ESE519\Lab2\pico-sdk\src\boards\include\boards\adafruit_qtpy_rp2040.h"

#define PIN_R 6
#define PIN_G 4
#define PIN_B 3
#define PIN_CB_RG 29
#define PIN_CB_BY 28


void dot(int redVal, int greenVal, int blueVal)
{
gpio_put(PIN_R, redVal);
gpio_put(PIN_G, greenVal);
gpio_put(PIN_B, blueVal);
sleep_ms(500);
gpio_put(PIN_R, 0);
gpio_put(PIN_G, 0);
gpio_put(PIN_B, 0);
}
void dash(int redVal, int greenVal, int blueVal)
{
gpio_put(PIN_R, redVal);
gpio_put(PIN_G, greenVal);
gpio_put(PIN_B, blueVal);
sleep_ms(2000);
gpio_put(PIN_R, 0);
gpio_put(PIN_G, 0);
gpio_put(PIN_B, 0);
}
void A(int redVal, int greenVal, int blueVal)
{
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
}
void B(int redVal, int greenVal, int blueVal)
{
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
}
void C(int redVal, int greenVal, int blueVal)
{
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
}
void D(int redVal, int greenVal, int blueVal)
{
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
}
void E(int redVal, int greenVal, int blueVal)
{
dot(redVal, greenVal, blueVal);
sleep_ms(500);
}
void f(int redVal, int greenVal, int blueVal)
{
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
}
void G(int redVal, int greenVal, int blueVal)
{
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
}
void H(int redVal, int greenVal, int blueVal)
{
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
}
void I(int redVal, int greenVal, int blueVal)
{
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
}
void J(int redVal, int greenVal, int blueVal)
{
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
}
void K(int redVal, int greenVal, int blueVal)
{
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
}
void L(int redVal, int greenVal, int blueVal)
{
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
}
void M(int redVal, int greenVal, int blueVal)
{
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
}
void N(int redVal, int greenVal, int blueVal)
{
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
}
void O(int redVal, int greenVal, int blueVal)
{
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
}
void P(int redVal, int greenVal, int blueVal)
{
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
}
void Q(int redVal, int greenVal, int blueVal)
{
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
}
void R(int redVal, int greenVal, int blueVal)
{
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
}
void S(int redVal, int greenVal, int blueVal)
{
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
}
void T(int redVal, int greenVal, int blueVal)
{
dash(redVal, greenVal, blueVal);
sleep_ms(500);
}
void U(int redVal, int greenVal, int blueVal)
{
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
}
void V(int redVal, int greenVal, int blueVal)
{
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
}
void W(int redVal, int greenVal, int blueVal)
{
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
}
void X(int redVal, int greenVal, int blueVal)
{
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
}
void Y(int redVal, int greenVal, int blueVal)
{
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
}
void Z(int redVal, int greenVal, int blueVal)
{
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
}
void one(int redVal, int greenVal, int blueVal)
{
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
}
void two(int redVal, int greenVal, int blueVal)
{
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
}
void three(int redVal, int greenVal, int blueVal)
{
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
}
void four(int redVal, int greenVal, int blueVal)
{
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
}
void five(int redVal, int greenVal, int blueVal)
{
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
}
void six(int redVal, int greenVal, int blueVal)
{
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
}
void seven(int redVal, int greenVal, int blueVal)
{
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
}
void eight(int redVal, int greenVal, int blueVal)
{
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
}
void nine(int redVal, int greenVal, int blueVal)
{
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dot(redVal, greenVal, blueVal);
sleep_ms(500);
}
void zero(int redVal, int greenVal, int blueVal)
{
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
dash(redVal, greenVal, blueVal);
sleep_ms(500);
}



//void pattern_snakes(uint len, uint t) {
//    for (uint i = 0; i < len; ++i) {
//        uint x = (i + (t >> 1)) % 64;
//        if (x < 10)
//            put_pixel(urgb_u32(0xff, 0, 0));
//        else if (x >= 15 && x < 25)
//            put_pixel(urgb_u32(0, 0xff, 0));
//        else if (x >= 30 && x < 40)
//            put_pixel(urgb_u32(0, 0, 0xff));
//        else
//            put_pixel(0);
//    }
//}
//
//void pattern_random(uint len, uint t) {
//    if (t % 8)
//        return;
//    for (int i = 0; i < len; ++i)
//        put_pixel(rand());
//}
//
//void pattern_sparkle(uint len, uint t) {
//    if (t % 8)
//        return;
//    for (int i = 0; i < len; ++i)
//        put_pixel(rand() % 16 ? 0 : 0xffffffff);
//}
//
//void pattern_greys(uint len, uint t) {
//    int max = 100; // let's not draw too much current!
//    t %= max;
//    for (int i = 0; i < len; ++i) {
//        put_pixel(t * 0x10101);
//        if (++t >= max) t = 0;
//    }
//}
//
//typedef void (*pattern)(uint len, uint t);
//const struct {
//    pattern pat;
//    const char *name;
//} pattern_table[] = {
//        {pattern_snakes,  "Snakes!"},
//        {pattern_random,  "Random data"},
//        {pattern_sparkle, "Sparkles"},
//        {pattern_greys,   "Greys"},
//};

int main() {
    //set_sys_clock_48();
    stdio_init_all();
    gpio_init(PIN_R);
    gpio_init(PIN_G);
    gpio_init(PIN_B);
    gpio_init(PIN_CB_RG);
    gpio_init(PIN_CB_BY);
    int redVal = 1, greenVal = 1, blueVal = 1;
    
    gpio_set_dir(PIN_R, GPIO_OUT);
    gpio_set_dir(PIN_G, GPIO_OUT);
    gpio_set_dir(PIN_B, GPIO_OUT);
    gpio_set_dir(PIN_CB_RG, GPIO_IN);
    gpio_set_dir(PIN_CB_BY, GPIO_IN);
    
    // gpio_put(PIN_R, 1);
	// gpio_put(PIN_G, 1);
	// gpio_put(PIN_B, 1);	
    
    while(1){
        if(gpio_get(PIN_CB_RG)){
        	//Add blue based colors and switch off red/green channel
        	redVal = 0;
        	greenVal = 0;
        	blueVal = 1;
        	printf("In blue mode!");
		} 
		if(gpio_get(PIN_CB_BY)){
			////Add red/green based colors and switch off blue channel
			redVal = 1;
        	greenVal = 1;
        	blueVal = 0;
        	printf("In red green mode!");
		}
		if(!gpio_get(PIN_CB_RG) && !gpio_get(PIN_CB_BY)){
			redVal = 1;
        	greenVal = 1;
        	blueVal = 1;
		}

		char ch;
		ch = getchar_timeout_us(5000);

		if(ch){
			//print it's corresponding morse code and on screen
			// char ch = char(c);
			printf("%c", ch);
			printf("\n");
			if (ch == 'A' || ch == 'a')
			{
			A( redVal,  greenVal,  blueVal);
			}
			else if (ch == 'B' || ch == 'b')
			{
			B( redVal,  greenVal,  blueVal);
			
			}
			else if (ch == 'C' || ch == 'c')
			{
			C( redVal,  greenVal,  blueVal);
			
			}
			else if (ch == 'D' || ch == 'd')
			{
			D( redVal,  greenVal,  blueVal);
			
			}
			else if (ch == 'E' || ch == 'e')
			{
			E( redVal,  greenVal,  blueVal);
			
			}
			else if (ch == 'f' || ch == 'f')
			{
			f( redVal,  greenVal,  blueVal);
			
			}
			else if (ch == 'G' || ch == 'g')
			{
			G( redVal,  greenVal,  blueVal);
			
			}
			else if (ch == 'H' || ch == 'h')
			{
			H( redVal,  greenVal,  blueVal);
			
			}
			else if (ch == 'I' || ch == 'i')
			{
			I( redVal,  greenVal,  blueVal);
			
			}
			else if (ch == 'J' || ch == 'j')
			{
			J( redVal,  greenVal,  blueVal);
			
			}
			else if (ch == 'K' || ch == 'k')
			{
			K( redVal,  greenVal,  blueVal);
			
			}
			else if (ch == 'L' || ch == 'l')
			{
			L( redVal,  greenVal,  blueVal);
			
			}
			else if (ch == 'M' || ch == 'm')
			{
			M( redVal,  greenVal,  blueVal);
			
			}
			else if (ch == 'N' || ch == 'n')
			{
			N( redVal,  greenVal,  blueVal);
			
			}
			else if (ch == 'O' || ch == 'o')
			{
			O( redVal,  greenVal,  blueVal);
			
			}
			else if (ch == 'P' || ch == 'p')
			{
			P( redVal,  greenVal,  blueVal);
			
			}
			else if (ch == 'Q' || ch == 'q')
			{
			Q( redVal,  greenVal,  blueVal);
			
			}
			else if (ch == 'R' || ch == 'r')
			{
			R( redVal,  greenVal,  blueVal);
			
			}
			else if (ch == 'S' || ch == 's')
			{
			S( redVal,  greenVal,  blueVal);
			
			}
			else if (ch == 'T' || ch == 't')
			{
			T( redVal,  greenVal,  blueVal);
			
			}
			else if (ch == 'U' || ch == 'u')
			{
			U( redVal,  greenVal,  blueVal);
			
			}
			else if (ch == 'V' || ch == 'v')
			{
			V( redVal,  greenVal,  blueVal);
			
			}
			else if (ch == 'W' || ch == 'w')
			{
			W( redVal,  greenVal,  blueVal);
			
			}
			else if (ch == 'X' || ch == 'x')
			{
			X( redVal,  greenVal,  blueVal);
			
			}
			else if (ch == 'Y' || ch == 'y')
			{
			Y( redVal,  greenVal,  blueVal);
			
			}
			else if (ch == 'Z' || ch == 'z')
			{
			Z( redVal,  greenVal,  blueVal);
			
			}
			else if (ch == '0')
			{
			zero( redVal,  greenVal,  blueVal);
			
			}
			else if (ch == '1')
			{
			one( redVal,  greenVal,  blueVal);
			
			}
			else if (ch == '2')
			{
			two( redVal,  greenVal,  blueVal);
			
			}
			else if (ch == '3')
			{
			three( redVal,  greenVal,  blueVal);
			
			}
			else if (ch == '4')
			{
			four( redVal,  greenVal,  blueVal);
			
			}
			else if (ch == '5')
			{
			five( redVal,  greenVal,  blueVal);
			
			}
			else if (ch == '6')
			{
			six( redVal,  greenVal,  blueVal);
			
			}
			else if (ch == '7')
			{
			seven( redVal,  greenVal,  blueVal);
			
			}
			else if (ch == '8')
			{
			eight( redVal,  greenVal,  blueVal);
			
			}
			else if (ch == '9')
			{
			nine( redVal,  greenVal,  blueVal);
			
			}
			


		}
		//Input character and display in that color
    }
}
    // todo get free smw
//    PIO pio = pio0;
//    int sm = 0;
//    uint offset = pio_add_program(pio, &ws2812_program);
//
//    ws2812_program_init(pio, sm, offset, WS2812_PIN, 800000, IS_RGBW);

    //int t = 0;
    
//    while (1) {
//    	if(printf("Hello World\n")){
//    		put_pixel(urgb_u32(0, 0, 0xff));
//    		sleep_ms(500);
//    		put_pixel(0);
//    		printf(READ(REG1));
//		}
//		sleep_ms(2000);
//    }
//}
