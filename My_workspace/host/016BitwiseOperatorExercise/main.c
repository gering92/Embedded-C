/*
 * main.c
 *
 *  Created on: Mar 14, 2025
 *      Author: ggeorge
 */

#include <stdint.h>
#include <stdio.h>


int main(void) {
	int a, b;
	a = 24;
	b = 37;

	printf("A & B = %d\n", a & b);
	printf("A & B = %x\n", a & b);

	printf("A | B = %d\n", a | b);
	printf("A | B = %x\n", a | b);

	return 0;
}
