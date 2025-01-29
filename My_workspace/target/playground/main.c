/*
 * main.c
 *
 *  Created on: Jan 7, 2025
 *      Author: ggeorge
 */


#include <stdint.h>
#include <stdio.h>
#include "math.h"


int main(void)
{
	unsigned char data = 0x1FFFFFFFA0B0 + 0x1245;

	float result = (float) 80/3;

	printf("Data: %u result: %f\n", data, result);
	return 0;
}


