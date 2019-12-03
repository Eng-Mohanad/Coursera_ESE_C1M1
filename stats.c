/*-----------------------------------------------------------------------------
 * [FILENAME]:		stats.c
 * [PROJECT]:		Coursera ESE Week.1 Assignment
 * [CREATED ON]:	Dec 03, 2019.
 * [AUTHOR]:		Eng. Mohanad M. Marzouk
 * [DESCRIPTION]:
 * 	_ main implementation file for week.1 assignment.
 * 	_ the file contains function definitions and main routine to run
 * 	_ the statistical analysis purposed for the project.
 * --------------------------------------------------------------------------*/

/* Includes */
#include <stdio.h>
#include "stats.h"

/* Global Variables */
unsigned char g_array[SIZE] = {  34, 201, 190, 154,   8, 194,   2,   6,
				114,  88,  45,  76, 123,  87,  25,  23,
				200, 122, 150,  90,  92,  87, 177, 244,
				201,   6,  12,  60,   8,   2,   5,  67,
				  7,  87, 250, 230,  99,   3, 100,  90};

/* Function main */
int main(void){
	print_array(g_array,SIZE);
	sort_array(g_array,SIZE);
	print_statistics(g_array,SIZE);

	return 0;
}

/* User_defined Functions */
float find_median(unsigned char *a_array, unsigned char a_size){
	/* local variables */
	float median = 0;

	/* for arrays with even number of elements */
	if( a_size%2 == 0 ){
		median = (a_array[(a_size-1)/2] + a_array[a_size/2]) / 2;
	}
	else{
		median = a_array[a_size/2];
	}
	return median;
}

float find_mean(unsigned char *a_array, unsigned char a_size){
	/* local variables */
	unsigned char i, sum = 0;
	float mean = 0;

	/* summing array elements */
	for( i = 0 ; i < a_size ; i++ ){
		sum += a_array[i];
	}
	mean = sum / a_size;
}

unsigned char find_maximum(unsigned char *a_array, unsigned char a_size){
	/* local variables */
	unsigned char i, maximum = 0;
	
	maximum = a_array[0];
	/* iterating through array elements */
	for( i = 0 ; i < a_size ; i++ ){
		if( a_array[i] > maximum ){
			maximum = a_array[i];
		}
	}
	return maximum;
}

unsigned char find_minimum(unsigned char *a_array, unsigned char a_size){
	/* local variables */
	unsigned char i, minimum = 0;

	minimum = a_array[0];
	/* iterating through array elements */
	for( i = 0 ; i < a_size ; i++ ){
		if ( a_array[i] < minimum ){
			minimum = a_array[i];
		}
	}
	return minimum;
}

void print_statistics(unsigned char *a_array, unsigned char a_size){
	/* local variables */
	float median = 0, mean = 0;
	unsigned char maximum = 0, minimum = 0;

	/* getting calculated results from functions */
	median = find_median(g_array,SIZE);
	mean = find_mean(g_array,SIZE);
	maximum = find_maximum(g_array,SIZE);
	minimum = find_minimum(g_array,SIZE);

	/* prinitng statistics on screen */
	printf("The Calculated Statistics are:\n");
	printf("***************\n");
	printf("Median Element  = %.0f\n", median);
	printf("Mean Value      = %0.f\n", mean);
	printf("Maximum Element = %d\n", maximum);
	printf("Minimum Element = %d\n", minimum);
	printf("****************************************\n\n");
}

void print_array(unsigned char *a_array, unsigned char a_size){
	/* local variables */
	unsigned char i;

	printf("The Given Array:\n");
	/* iterarting through array elements */
	for( i = 0 ; i < a_size ; i++ ){
		printf("%3d\t", a_array[i]);
		if( (i+1)%8 == 0 ){
			printf("\n");
		}
	}
	printf("****************************************\n");
}

void sort_array(unsigned char *a_array, unsigned char a_size){
	/* local variables */
	unsigned char i, j, min_index = 0;

	/*---
	 * Local Function to swap array elements
	 * --*/
	void swap(unsigned char *x_ptr, unsigned char *y_ptr){
		unsigned char temp = 0;
		temp = *x_ptr;
		*x_ptr = *y_ptr;
		*y_ptr = temp;
	}

	/* iterating through array elements */
	for( i = 0 ; i < (a_size-1) ; i++ ){
		min_index = i;
		for( j = i+1 ; j < a_size ; j++ ){
			if( a_array[j] < a_array[min_index] ){
				min_index = j;
			}
		}
		swap(&a_array[min_index], &a_array[i]);
	}

	/* printing sorted array */
	printf("The Array after Sorting:\n");
	for( i = 0 ; i < a_size ; i++ ){
		printf("%3d\t", a_array[i]);
		if( (i+1)%8 == 0 ){
			printf("\n");
		}
	}
	printf("****************************************\n");
}




/* End of File */			/* _stats.c_ */
