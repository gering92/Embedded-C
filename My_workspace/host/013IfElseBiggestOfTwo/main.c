/*
 * main.c
 *
 *  Created on: Mar 13, 2025
 *      Author: ggeorge
 */


#include <stdio.h>
#include <stdint.h>

void wait_for_user_input(void);

int main(void) {

	float num1, num2;

	printf("Enter first number (integer): ");
	if (scanf("%f", &num1) == 0) {
		printf("Invalid input! Exiting ...\n");
		wait_for_user_input();
		return 1;
	}

	printf("\nEnter second number (integer): ");
	if (scanf("%f", &num2) == 0) {
		printf("Invalid input! Exiting ...\n");
		wait_for_user_input();
		return 1;
	}

	int32_t n1, n2;
	n1 = num1;
	n2 = num2;

	if (n1 != num1 || n2 != num2) {
		printf("Warning! Comparing only integer part\n");
	}

	if (n1 == n2) {
		printf("The numbers are equal.\n");
	}
	else {
		if (n1 < n2) {
			printf("%d (Second Number) is bigger\n", n2);
		}
		else {
			printf("%d (First Number) is bigger\n", n1);
		}
	}

	wait_for_user_input();

	return 0;
}

void wait_for_user_input(void) {
	printf("\nPress Enter Key to Exit the Application...");
	while(getchar() != '\n') {

	}
	getchar();
}
