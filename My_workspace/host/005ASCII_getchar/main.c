/*
 * main.c
 *
 *  Created on: Mar 7, 2025
 *      Author: ggeorge
 */


#include <stdio.h>

int main(void) {
	char chars[6];

	printf("Enter 6 characters of your choice: ");

	for(int i = 0; i < 6; i++) {
		chars[i] = getchar();
	}

	printf("\nASCII Codes: ");
	for(int i = 0; i < 6; i++) {
		printf("\n%c: %d", chars[i], chars[i]);
	}

	printf("\nPress Enter Key to Exit the Application...");
	while(getchar() != '\n') {

	}
	getchar();
}
