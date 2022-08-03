/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  float mark1, mark2;
  float total,avg;

  printf("Enter mark : ");
  scanf("%f", &mark1);
  printf("Enter mark2 : ");
  scanf("%f", &mark2);

  total = mark1+mark2;
  avg = (float)total/2.0;
  printf("avg is %.2f",avg);
  
 
  
  
  return 0;
}

