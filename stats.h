/*-----------------------------------------------------------------------------
 * [FILENAME]:		stats.h
 * [PROJECT]:		Coursera ESE Week.1 Assignment
 * [CREATED ON]:	Dec 03, 2019.
 * [AUTHOR]:		Eng. Mohanad M. Marzouk.
 * [DESCRIPTION]:
 * 	_ main header file for week.1 assignment.
 * 	_ the file contains function prototypes and description for the
 * 	_ statistical analysis project implemented in week.1 assignment.
 * --------------------------------------------------------------------------*/
#ifndef _STATS_H_
#define _STATS_H_

/* Project_Specific Constants */
#define SIZE (40)

/* Function Prototypes and Description */

/*--
 * [FUNCTION]:		find_median()
 * [DESCRIPTION]:
 * 	_ function to find the median element of a given array of data.
 * [ARGUMENTS]:
 * [IN]
 * 	_ unsigned char *a_array: given array of data.
 * 	_ unsigned char a_size: size of the given array.
 * [OUT]
 * 	_ the median element of the given array.
 * [RETURN TYPE]:
 * 	_ float _ (float type for portability for arrays that have odd number
 * 	_ of elements).
 * --*/
float find_median(unsigned char *a_array, unsigned char a_size);

/*--
 * [FUNCTION]:		find_mean()
 * [DESCRIPTION]:
 * 	_ function to find the mean value of a given array of data.
 * [ARGUMENTS]:
 * [IN]
 * 	_ unsigned char *a_array: given array of data.
 * 	_ unsigned char a_size: size of the given array.
 * [OUT]
 * 	_ the mean value of the given array elements.
 * [RETURN TYPE]:
 * 	_ float _ (float type for accuracy of the mean result).
 * --*/
float find_mean(unsigned char *a_array, unsigned char a_size);

/*--
 * [FUNCTION]:		find_maximum()
 * [DESCRIPTION]:
 * 	_ function to find the maximum element of a given array of data.
 * [ARGUMENTS]:
 * [IN]
 * 	_ unsigned char *a_array: given array of data.
 * 	_ unsigned char a_size: size of the given array.
 * [OUT]
 * 	_ the maximum element of the given array elements.
 * [RETURN TYPE]:
 * 	_ unsigned char _ (similar to array data type).
 * --*/
unsigned char find_maximum(unsigned char *a_array, unsigned char a_size);

/*--
 * [FUNCTION]:		find_minimum()
 * [DESCRIPTION]:
 * 	_ function to find the minimum element of a given array of data.
 * [ARGUMENTS]:
 * [IN]
 * 	_ unsigned char *a_array: given array of data.
 * 	_ unsigned char a_size: size of the given array.
 * [OUT]
 * 	_ the minimum element of the given array elements.
 * [RETURN TYPE]:
 * 	_ unsigned char _ (similar to array data type).
 * --*/
unsigned char find_minimum(unsigned char *a_array, unsigned char a_size);

/*--
 * [FUNCTION]:		print_statistics()
 * [DESCRIPTION]:
 * 	_ function to print the calculated statistics of a given array of data.
 * [ARGUMENTS]:
 * [IN]
 * 	_ unsigned char *a_array: given array of data.
 * 	_ unsigned char a_size: size of the given array.
 * [OUT]
 * 	_ the statistics will printed on the screen.
 * [RETURN TYPE]:
 * 	_ void.
 * --*/
void print_statistics(unsigned char *a_array, unsigned char a_size);

/*--
 * [FUNCTION]:		print_array()
 * [DESCRIPTION]:
 * 	_ function to print the given array of data on the screen.
 * [ARGUMENTS]:
 * [IN]
 * 	_ unsigned char *a_array: given array of data.
 * 	_ unsigned char a_size: size of the given array.
 * [OUT]
 * 	_ the array of data will be printed on the screen.
 * [RETURN TYPE]:
 * 	_ void.
 * --*/
void print_array(unsigned char *a_array, unsigned char a_size);

/*--
 * [FUNCTION]:		sort_array()
 * [DESCRIPTION]:
 * 	_ function to sort and print a given array.
 * 	_ the function uses selection sort algorithm to sort the elements.
 * [ARGUMENTS]:
 * [IN]
 * 	_ unsigned char *a_array: given array of data.
 * 	_ unsigned char a_size: size of the given array.
 * [OUT]
 * 	_ the sorted array will be printed on the screen.
 * [RETURN TYPE]:
 * 	_ void.
 * --*/
void sort_array(unsigned char *a_array, unsigned char a_size);




#endif		/* _STATS_H_ */
