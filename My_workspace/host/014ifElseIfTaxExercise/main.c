/*
 * main.c
 *
 *  Created on: Mar 13, 2025
 *      Author: ggeorge
 */


#include <stdint.h>
#include <stdio.h>

void wait_for_user_input(void);

int main(void) {

	float income;
	float taxPayable;

	printf("Please enter your income: ");
	if (scanf("%f", &income) == 0) {
		printf("Error. Please enter valid income value...");
		wait_for_user_input();
		return 1;
	}

	if (income >= 9526 && income <= 38700) {
		taxPayable = (float) income * (12.0/100);
		printf("You owe $%f in taxes.", taxPayable);
	}
	else if (income >= 38701 && income <= 82500) {
		taxPayable = (float) income * (22.0/100);
		printf("You owe $%f in taxes.", taxPayable);
	}
	else if (income > 82500) {
		taxPayable = (float) 1000 + (income * (32.0/100));
		printf("You owe $%f in taxes.", taxPayable);
	}
	else {
		printf("Congratulations! You are poor and don't owe anything in taxes.");
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
