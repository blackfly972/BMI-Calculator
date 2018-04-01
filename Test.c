/*
 ============================================================================
 Name        : BMICalculator.c
 Author      : Me
 Version     :
 Copyright   : Your copyright notice
 Description : BMI calculator in C
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	float weight = 0;
	float height = 0;
	float height2 = 0;
	float BMI = 0;

	// Ask the user to enter the height and the weight
	puts("BMI Calculator\n");
	printf("\nEnter your height in centimeters:\n");
	scanf("%f", &height);
	printf("Enter your weight in kilograms:\n");
	scanf("%f", &weight);

	//BMI formula
	height2 = (height * height) / 10000;
	BMI = weight / height2;

	printf("\nYour BMI is %f \n", BMI);

	if (BMI <= 16.5) {
		printf("Undernourishment or famine \n");
	}

	else if (BMI <= 18.5) {
		printf("Underweight \n");
	}

	else if (BMI <= 25) {
		printf("Normal \n");
	}

	else if (BMI < 30) {
		printf("Overweight \n");
	}

	else {
		printf("Obese");
	}
	return EXIT_SUCCESS;
}
