/*
 * main.c
 *
 *  Created on: Mar 7, 2025
 *      Author: ggeorge
 */

#include <stdio.h>

int main(void) {
	char char1, char2, char3, char4, char5, char6;

	printf("Enter 6 characters of your choice: ");
	scanf("%c %c %c %c %c %c", &char1, &char2, &char3, &char4, &char5, &char6);

	printf("\nASCII Codes: ");
	printf("\n%c: %d", char1, char1);
	printf("\n%c: %d", char2, char2);
	printf("\n%c: %d", char3, char3);
	printf("\n%c: %d", char4, char4);
	printf("\n%c: %d", char5, char5);
	printf("\n%c: %d", char6, char6);

	printf("\nPress Enter Key to Exit the Application...");
	while(getchar() != '\n') {

	}
	getchar();
}
