/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main() // main function beigins
{

  float sub1, sub2, avg; // variable declaration

  printf("Enter marks :"); // get user inputs
  scanf("%f", &sub1);

  printf("Enter marks :");
  scanf("%f", &sub2);

  avg = (sub1 + sub2) / 2.0;
  printf("Average is : %.2f", avg);

  return 0;
} // end of the main function
