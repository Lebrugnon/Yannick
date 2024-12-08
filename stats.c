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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

unsigned char test2[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
print_statistic(test2, SIZE);
print_array(test, SIZE);

}



unsigned char find_minimum(unsigned char *X, size_t size){
  size_t i;
  unsigned char min=X[0];
  for( i=1 ; i < size ; i++){
    if(X[i] < min){
      min=X[i];
    }
  }
return(min);
}

unsigned char find_maximum(unsigned char *X, size_t size){
  size_t i;
  unsigned char max = X[0];
  for( i=0 ; i < size ; i++){
    if (X[i] > max){
    max = X[i];
    }
    }
return(max);
}

double find_mean(unsigned char *X, size_t size){
  double sum = 0;
    size_t i;
    for (i = 0; i < size; i++){
        sum += X[i];
    }
return(sum/size);
}

unsigned char find_median(unsigned char *X, size_t size){
  sort_array(X, size);
  return(X[size/2-1]);
}




void sort_array(unsigned char *X, size_t size){
  size_t i; 
  size_t j;
  for(i=0; i<size-1 ; i++){
    for(j=0; j<size-i-1 ; j++){
      if(X[j] < X[j+1]){
        unsigned char temp = X[j];
        X[j]= X[j+1];
        X[j+1] = temp;
      }
    }
  }
}


void print_statistic(unsigned char *X, size_t size){
printf("here is the maximum value of this chart :%u \n",find_maximum(X,size));
printf("here is the mean value of this chart: %f \n",find_mean(X,size));
printf("here is the minimum value of this chart: %u \n",find_minimum(X,size) );
printf("here is the median value of this chart: %u \n",find_median(X,size));
}

void print_array(unsigned char *X, size_t size){
  size_t i;
  for(i=0; i<size ; i++){
  printf("%u%s",X[i],(i<size - 1) ? ",":"\n");
  }
}
/* Add other Implementation File Code Here */
