/*
 * main.c
 *
 *  Created on: Mar 7, 2025
 *      Author: ggeorge
 */

#include <stdio.h>

int main(void) {
	float num1, num2, num3;
	float average;

	printf("Select number 1: ");
	fflush(stdout);
	scanf("%f", &num1);

	printf("\nSelect number 2: ");
	fflush(stdout);
	scanf("%f", &num2);

	printf("\nSelect number 3: ");
	fflush(stdout);
	scanf("%f", &num3);

	average = (num1 + num2 + num3) / 3;
	printf("\nYour Average is: %f\n", average);

	printf("Press enter to exit the application. \n");
	while(getchar() != '\n') {

	}
	getchar();
}
