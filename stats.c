/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Implementation of statistical analysis functions.
 *
 * This file contains functions to calculate statistics and sort an array
 * of unsigned char data.
 *
 * @author Rachel Christina
 * @date 10/11/2026
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int main(void) {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};


  (void)test;
  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

  return 0;
}

/**
 * @brief Prints the statistics of an array.
 *
 * @param array Pointer to the data array.
 * @param length Number of elements in the array.
 */
void print_statistics(unsigned char *array, unsigned int length)
{
}

/**
 * @brief Prints the elements of an array.
 *
 * @param array Pointer to the data array.
 * @param length Number of elements in the array.
 */
void print_array(unsigned char *array, unsigned int length)
{
}

/**
 * @brief Finds the median value of an array.
 *
 * @param array Pointer to the data array.
 * @param length Number of elements in the array.
 * @return Median value of the array.
 */
unsigned char find_median(unsigned char *array, unsigned int length)
{
return 0;
}

/**
 * @brief Calculates the mean of an array.
 *
 * @param array Pointer to the data array.
 * @param length Number of elements in the array.
 * @return Mean value rounded down to the nearest integer.
 */
unsigned char find_mean(unsigned char *array, unsigned int length)
{
return 0;
}

/**
 * @brief Finds the maximum value in an array.
 *
 * @param array Pointer to the data array.
 * @param length Number of elements in the array.
 * @return Maximum value in the array.
 */
unsigned char find_maximum(unsigned char *array, unsigned int length)
{
return 0;
}

/**
 * @brief Finds the minimum value in an array.
 *
 * @param array Pointer to the data array.
 * @param length Number of elements in the array.
 * @return Minimum value in the array.
 */
unsigned char find_minimum(unsigned char *array, unsigned int length)
{
return 0;
}

/**
 * @brief Sorts an array in descending order.
 *
 * @param array Pointer to the data array.
 * @param length Number of elements in the array.
 */
void sort_array(unsigned char *array, unsigned int length)
{
}
