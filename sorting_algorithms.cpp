/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			sorting_algorithms.cpp
 * Author(s):		<your name>
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/

#include "sorting_algorithms.h"

int* init_random(int* array, int len){
  for (int i = 0; i < len; i++) {
    array[i] = rand() % len;
  }
  return array;
}

void bubble_sort(int* array, int len){
  bool is_sorted = false;
  int count = len - 1;
  while (is_sorted == false) {
    is_sorted = true;
    for (int i = 0; i < count; i++) {
      if (array[i] > array[i+1]) {
        is_sorted = false;
        int swap = array[i];
        array[i] = array[i + 1];
        array[i + 1] = swap;
      }
    }
    count--;
  }
}

void insertion_sort(int* array, int len){
  for (int i = 1 ; i <= len - 1; i++) {
    int d = i;

    while ( d > 0 && array[d-1] > array[d]) {
      int swap = array[d];
      array[d] = array[d-1];
      array[d-1] = swap;

      d--;
    }
  }
}
