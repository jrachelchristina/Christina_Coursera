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
 * @file stats.h
 * @brief Function declarations for statistical analysis.
 *
 * This file declares functions to calculate statistics and sort an array.
 *
 * @author Rachel Christina
 * @date 10/11/2026
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints the statistics of an array.
 *
 * Displays the minimum, maximum, mean, and median values.
 *
 * @param array Pointer to the data array.
 * @param length Number of elements in the array.
 */
void print_statistics(unsigned char *array, unsigned int length);


/**
 * @brief Prints the elements of an array.
 *
 * Displays all elements of the given data array.
 *
 * @param array Pointer to the data array.
 * @param length Number of elements in the array.
 */
void print_array(unsigned char *array, unsigned int length);
/**
 * @brief Finds the median value of an array.
 *
 * Returns the median value after sorting the data.
 *
 * @param array Pointer to the data array.
 * @param length Number of elements in the array.
 * @return Median value of the array.
 */
unsigned char find_median(unsigned char *array, unsigned int length);

/**
 * @brief Calculates the mean of an array.
 *
 * Calculates the average value of all elements.
 *
 * @param array Pointer to the data array.
 * @param length Number of elements in the array.
 * @return Mean value rounded down to the nearest integer.
 */
unsigned char find_mean(unsigned char *array, unsigned int length);

/**
 * @brief Finds the maximum value in an array.
 *
 * Searches for the largest element in the data array.
 *
 * @param array Pointer to the data array.
 * @param length Number of elements in the array.
 * @return Maximum value in the array.
 */
unsigned char find_maximum(unsigned char *array, unsigned int length);

/**
 * @brief Finds the minimum value in an array.
 *
 * Searches for the smallest element in the data array.
 *
 * @param array Pointer to the data array.
 * @param length Number of elements in the array.
 * @return Minimum value in the array.
 */
unsigned char find_minimum(unsigned char *array, unsigned int length);

/**
 * @brief Sorts an array in descending order.
 *
 * Arranges the elements from largest to smallest.
 *
 * @param array Pointer to the data array.
 * @param length Number of elements in the array.
 */
void sort_array(unsigned char *array, unsigned int length);
#endif /* __STATS_H__ */
