/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */
#include<stdio.h>
int main() 
{
  float no,sum=0;
  int i;

  for(i=1;i<=5;i++)
    {
      printf("Next number : ");
      scanf("%f",&no);
      sum+=no;
      
    }
  printf("The sum of 5 numbers %.2f", sum);
  
  return 0;
}


