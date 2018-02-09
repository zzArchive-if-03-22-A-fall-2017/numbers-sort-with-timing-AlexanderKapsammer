/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			stopwatch.cpp
 * Author(s):		Peter Bauer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include <time.h>
#include "stopwatch.h"
#include "sorting_algorithms.h"

clock_t start_time;
clock_t end_time;
void start_stopwatch(){
  start_time = clock();
  end_time = 0;
}
void stop_stopwatch(){
  end_time = clock();
}
float elapsed_time(){
  if (end_time == 0) {
    stop_stopwatch();
  }
  return double(end_time - start_time) / CLOCKS_PER_SEC * 1000;
}
