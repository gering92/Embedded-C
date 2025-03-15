/*
 * main.c
 *
 *  Created on: Mar 10, 2025
 *      Author: ggeorge
 */


#include <stdio.h>

int main(void) {
	char c1 = 100;

	printf("Value of c1: %d\n", c1);
	printf("Address of c1: %p\n", &c1);

	char* pAddress = &c1;


	char data = *pAddress;
	printf("Data = %d\n", data);

	*pAddress = 65;
	printf("New Value of c1: = %d\n", c1);

	printf("End Program");
}
