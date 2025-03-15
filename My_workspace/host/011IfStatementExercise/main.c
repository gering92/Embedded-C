/*
 * main.c
 *
 *  Created on: Mar 13, 2025
 *      Author: ggeorge
 */


#include <stdint.h>
#include <stdio.h>

int main(void) {

	uint8_t age;

	printf("Please enter your age: ");
	scanf("%hhu", &age);
	getchar();

	if (age < 18) {
		printf("You cannot vote\n");
		printf("\nPress Enter Key to Exit the Application...");
		getchar();
		return 0;
	}

	printf("You can vote.\n");

	printf("\nPress Enter Key to Exit the Application...");
	getchar();
	return 0;
}
