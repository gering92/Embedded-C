/*
 * main.c
 *
 *  Created on: Oct 31, 2024
 *      Author: geringeorge
 */


#include <stdio.h>

int main()
{
	char a1 = 'A';
	/*
	char a2 = 'p';
	char a3 = 'p';
	char a4 = 'l';
	char a5 = ';';
	*/
	unsigned long int addressOfa1 = (unsigned long int)&a1;


	printf("1: Address of char a1 = %p\n", &a1);
	printf("2: Address of char a1 = %lx\n", addressOfa1);
	/*
	printf("Address of char a2 = %p\n", &a2);
	printf("Address of char a3 = %p\n", &a3);
	printf("Address of char a4 = %p\n", &a4);
	printf("Address of char a5 = %p\n", &a5);
	*/
}
