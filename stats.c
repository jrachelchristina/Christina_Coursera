
/**
 * @file stats.c
 * @brief Implementation of statistical analysis functions.
 *
 * This file contains functions to calculate statistics and sort an array
 * of unsigned char data.
 *
 * @author Rachel Christina
 * @date 10/11/2026
**/

/*  new code */

#include <stdio.h>
#include "stats.h"

#define SIZE (40)

/* Function to print the statistics of the array */
void print_statistics(unsigned char *array, unsigned int length)
{
    if (length == 0)
    {
        printf("Array is empty.\n");
        return;
    }

    printf("\nStatistics:\n");
    printf("Maximum: %u\n", find_maximum(array, length));
    printf("Minimum: %u\n", find_minimum(array, length));
    printf("Mean: %u\n", find_mean(array, length));
    printf("Median: %u\n", find_median(array, length));
}

/* Function to print all elements of the array */
void print_array(unsigned char *array, unsigned int length)
{
    unsigned int i;

    for (i = 0; i < length; i++)
    {
        printf("%u ", array[i]);
    }

    printf("\n");
}

/* Function to find the median */
unsigned char find_median(unsigned char *array, unsigned int length)
{
    unsigned char sorted[length];
    unsigned int i;

    if (length == 0)
    {
        return 0;
    }

    for (i = 0; i < length; i++)
    {
        sorted[i] = array[i];
    }

    sort_array(sorted, length);

    if (length % 2 == 0)
    {
        return (sorted[length / 2 - 1] + sorted[length / 2]) / 2;
    }
    else
    {
        return sorted[length / 2];
    }
}

/* Function to find the mean */
unsigned char find_mean(unsigned char *array, unsigned int length)
{
    unsigned long sum = 0;
    unsigned int i;

    if (length == 0)
    {
        return 0;
    }

    for (i = 0; i < length; i++)
    {
        sum = sum + array[i];
    }

    return (unsigned char)(sum / length);
}

/* Function to find the maximum value */
unsigned char find_maximum(unsigned char *array, unsigned int length)
{
    unsigned char maximum;
    unsigned int i;

    if (length == 0)
    {
        return 0;
    }

    maximum = array[0];

    for (i = 1; i < length; i++)
    {
        if (array[i] > maximum)
        {
            maximum = array[i];
        }
    }

    return maximum;
}

/* Function to find the minimum value */
unsigned char find_minimum(unsigned char *array, unsigned int length)
{
    unsigned char minimum;
    unsigned int i;

    if (length == 0)
    {
        return 0;
    }

    minimum = array[0];

    for (i = 1; i < length; i++)
    {
        if (array[i] < minimum)
        {
            minimum = array[i];
        }
    }

    return minimum;
}

/* Function to sort the array in descending order */
void sort_array(unsigned char *array, unsigned int length)
{
    unsigned int i;
    unsigned int j;
    unsigned char temp;

    for (i = 0; i < length - 1; i++)
    {
        for (j = 0; j < length - i - 1; j++)
        {
            if (array[j] < array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

/* Main function */
int main(void)
{
    unsigned char test[SIZE] =
    {
        34, 201, 190, 154, 8, 194, 2, 6,
        114, 88, 45, 76, 123, 87, 25, 23,
        200, 122, 150, 90, 92, 87, 177, 244,
        201, 6, 12, 60, 8, 2, 5, 67,
        7, 87, 250, 230, 99, 3, 100, 90
    };

    printf("Original Array:\n");
    print_array(test, SIZE);

    print_statistics(test, SIZE);

    sort_array(test, SIZE);

    printf("\nSorted Array (Descending Order):\n");
    print_array(test, SIZE);

    return 0;
}
