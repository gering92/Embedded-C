/*
 * main.c
 *
 *  Created on: Mar 13, 2025
 *      Author: ggeorge
 */


#include <stdint.h>
#include <stdio.h>
#define PI 3.141592653589793

void wait_for_user_input(void);

int main(void) {

	char userChoice;


	printf("Area Calculation Program\n");
	printf("Circle          -->c\n");
	printf("Triangle        -->t\n");
	printf("Rectangle       -->r\n");
	printf("Square          -->s\n");
	printf("Trapezoid       -->z\n");

	printf("Enter the code here: ");
	if (scanf("%c", &userChoice) == 0) {
		printf("Invalid input! Exiting ...\n");
		wait_for_user_input();
		return 1;
	}

	switch(userChoice) {
	case 'c': {
		float radius;
		printf("\nCircle Area Calculation \n");
		printf("Enter the radius value: ");
		if (scanf("%f", &radius) == 0) {
			printf("Invalid input! Exiting ... \n");
			wait_for_user_input();
			return 1;
		}

		if (radius <= 0) {
			printf("Radius must be positive! \n");
			wait_for_user_input();
			return 1;
		}
		float area = PI * (radius * radius);
		printf("Area of Circle with Radius %.3f: %.3f\n", radius, area);
		wait_for_user_input();
		break;
	}

	case 't': {
		float base, height;
		printf("\nTriangle Area Calculation \n");
		printf("Enter the base value: ");
		if (scanf("%f", &base) == 0) {
			printf("Invalid input! Exiting ... \n");
			wait_for_user_input();
			return 1;
		}

		if (base <= 0) {
			printf("Base must be positive! \n");
			wait_for_user_input();
			return 1;
		}

		printf("Enter the height value: ");
		if (scanf("%f", &height) == 0) {
			printf("Invalid input! Exiting ... \n");
			wait_for_user_input();
			return 1;
		}

		if (height <= 0) {
			printf("Height must be positive! \n");
			wait_for_user_input();
			return 1;
		}

		float area = (height * base) / 2;
		printf("Area of Triangle with Base %.3f and Height %.3f: %.3f", base, height, area);
		wait_for_user_input();
		break;
	}

	case 'r': {
		float length, width;
		printf("\nRectangle Area Calculation \n");
		printf("Enter the length value: ");
		if (scanf("%f", &length) == 0) {
			printf("Invalid input! Exiting ... \n");
			wait_for_user_input();
			return 1;
		}

		if (length <= 0) {
			printf("length must be positive! \n");
			wait_for_user_input();
			return 1;
		}
		printf("Enter the width value: ");
		if (scanf("%f", &width) == 0) {
			printf("Invalid input! Exiting ... \n");
			wait_for_user_input();
			return 1;
		}

		if (width <= 0) {
			printf("Width must be positive! \n");
			wait_for_user_input();
			return 1;
		}

		float area = (length * width);
		printf("Area of Rectangle with Length %.3f and Height %.3f: %.3f", length, width, area);
		wait_for_user_input();
		break;
	}

	case 's': {
		float side;
		printf("\nSquare Area Calculation \n");
		printf("Enter the side length: ");
		if (scanf("%f", &side) == 0) {
			printf("Invalid input! Exiting ... \n");
			wait_for_user_input();
			return 1;
		}

		if (side <= 0) {
			printf("Side length must be positive! \n");
			wait_for_user_input();
			return 1;
		}
		float area = (side * side);
		printf("Area of Square with Side Length %.3f: %.3f", side, area);
		wait_for_user_input();
		break;
	}

	case 'z': {
		float base1, base2, height;
		printf("\nTrapezoid Area Calculation \n");
		printf("Enter the base 1 length: ");
		if (scanf("%f", &base1) == 0) {
			printf("Invalid input! Exiting ... \n");
			wait_for_user_input();
			return 1;
		}

		printf("Enter the base 2 length: ");
		if (scanf("%f", &base2) == 0) {
			printf("Invalid input! Exiting ... \n");
			wait_for_user_input();
			return 1;
		}

		printf("Enter the height length: ");
		if (scanf("%f", &height) == 0) {
			printf("Invalid input! Exiting ... \n");
			wait_for_user_input();
			return 1;
		}

		float area = height * ((base1 + base2) / 2);
		printf("Area of Trapezoid: %.3f", area);
		wait_for_user_input();
		break;
	}


	default:
		printf("Invalid Choice. \n");
		wait_for_user_input();
		return 1;
	}



	return 0;
}




void wait_for_user_input(void) {
	printf("\nPress Enter Key to Exit the Application...");
	while(getchar() != '\n') {

	}
	getchar();
}
