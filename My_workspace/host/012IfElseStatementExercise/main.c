/*
 * main.c
 *
 *  Created on: Mar 13, 2025
 *      Author: ggeorge
 */


#include <stdint.h>
#include <stdio.h>

int main(void) {
	int age;

	printf("Please enter your age: ");
	scanf("%d", &age);

	if (age < 18) {
		printf("\nSorry! You cannot vote.\n");
	}
	else {
		printf("\nCongratulations! You can vote.\n");
	}

	printf("\nPress Enter Key to Exit the Application...");
	while(getchar() != '\n') {

	}
	getchar();
	return 0;
}
