/*
 * main.c
 *
 *  Created on: Mar 7, 2025
 *      Author: ggeorge
 */


#include <stdio.h>

int main(void) {

	double charge, electronCharge, numElectrons;
	electronCharge = -1.60217662e-19;
	printf("Enter the Charge: ");
	scanf("%lf", &charge);

	numElectrons = (charge / electronCharge) * -1;

	printf("\nThe number of Electrons is: %le", numElectrons);
	printf("\nThe number of Electrons is: %lf", numElectrons);

	printf("\nPress Enter Key to Exit the Application...");
	while(getchar() != '\n') {

	}
	getchar();
}

