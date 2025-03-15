/*
 * main.c
 *
 *  Created on: Mar 10, 2025
 *      Author: ggeorge
 */


#include <stdio.h>

long long int g_data = 0xFFFEABCD11112345;

int main(void) {

	char *pAddress1;

	pAddress1 = (char*) &g_data;

	printf("Value at Address %p is: %x\n", pAddress1, *pAddress1);
	printf("Address of pAddress1: %p\n", &pAddress1);


	int *pAddress2;
	pAddress2 = (int*) &g_data;
	printf("Value at Address %p is: %x\n", pAddress2, *pAddress2);
	printf("Address of pAddress2: %p\n", &pAddress2);

	short *pAddress3;
	pAddress3 = (short*) &g_data;
	printf("Value at Address %p is: %x\n", pAddress3, *pAddress3);
	printf("Address of pAddress3: %p\n", &pAddress3);

	long long int *pAddress4;
	pAddress4 = &g_data;
	printf("Value at Address %p is: %I64x\n", pAddress4, *pAddress4);
	printf("Address of pAddress4: %p\n", &pAddress4);
	return 0;
}
