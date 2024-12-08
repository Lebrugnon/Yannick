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
 * @file <header files> 
 * @brief <Here is the header files stats. We declare the differents function needed for the Week1 application of the class introduction-embedded-systems>
 *
 * <Add Extended Description Here>
 *
 * @author <Yannick Dahan>
 * @date <08/12/2024 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief < Given an array of data and a length, returns the minimume>
 *
 * 
 *
 * @param <unsigned char *X> <array of data>
 * @param <size_t size> <lenght of the array>
 * @return <return the minimum value>
 */
unsigned char find_minimum(unsigned char *X, size_t size);


/* Given an array of data and a length, returns the maximum */ 
unsigned char find_maximum(unsigned char *X, size_t size);


/* Given an array of data and a length, returns the mean */ 
double find_mean(unsigned char *X, size_t size);


/* Given an array of data and a length, sorts the array from largest to smallest.  (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. ) */ 
void sort_array(unsigned char *X, size_t size);


/* A function that prints the statistics of an array including minimum, maximum, mean, and median. */ 
void print_statistic(unsigned char *X, size_t size);


/* Given an array of data and a length, prints the array to the screen */ 
void print_array(unsigned char *X, size_t size);

unsigned char find_median(unsigned char *X, size_t size);


/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */


#endif /* __STATS_H__ */
