/******************************************************************************
 * Copyright (C) 2024 Yannick Dahan
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Yannick Dahan are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <header files> 
 * @brief <Here is the header files stats. We declare the differents function needed for the Week1 application of the class introduction-embedded-systems>
 *
 * 
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



/**
 * @brief < Given an array of data and a length, returns the maximum>
 *
 * 
 *
 * @param <unsigned char *X> <array of data>
 * @param <size_t size> <lenght of the array>
 * @return <return the maximum value>
 */
unsigned char find_maximum(unsigned char *X, size_t size);


/**
 * @brief < Given an array of data and a length, returns the mean>
 *
 * 
 *
 * @param <unsigned char *X> <array of data>
 * @param <size_t size> <lenght of the array>
 * @return <return the mean value>
 */
char find_mean(unsigned char *X, size_t size);


/**
 * @brief <  Given an array of data and a length, sorts the array from largest to smallest.  (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )>
 *
 * 
 *
 * @param <unsigned char *X> <array of data>
 * @param <size_t size> <lenght of the array>
 * @return <return void>
 */
void sort_array(unsigned char *X, size_t size);


/**
 * @brief <A function that prints the statistics of an array including minimum, maximum, mean, and median.>
 *
 * 
 *
 * @param <unsigned char *X> <array of data>
 * @param <size_t size> <lenght of the array>
 * @return <return void>
 */
void print_statistic(unsigned char *X, size_t size);



/**
 * @brief <Given an array of data and a length, prints the array to the screen  >
 *
 * 
 *
 * @param <unsigned char *X> <array of data>
 * @param <size_t size> <lenght of the array>
 * @return <return void>
 */
 void print_array(unsigned char *X, size_t size);


/**
 * @brief < Given an array of data and a length, returns the mean>
 *
 * 
 *
 * @param <unsigned char *X> <array of data>
 * @param <size_t size> <lenght of the array>
 * @return <return the mean value>
 */
unsigned char find_median(unsigned char *X, size_t size);




#endif /* __STATS_H__ */
