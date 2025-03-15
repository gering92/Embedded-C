/*
 * main.c
 *
 *  Created on: Mar 7, 2025
 *      Author: ggeorge
 */

#include <stdio.h>

int main(void) {
	double num1, num2, num3;
	double average;

	printf("Enter 3 Numbers: ");
	scanf("%lf %lf %lf", &num1, &num2, &num3);


	average = (num1 + num2 + num3) / 3;
	printf("\nYour Average is: %0.5lf\n", average);

	printf("Press enter to exit the application. \n");
	while(getchar() != '\n') {

	}
	getchar();
}
