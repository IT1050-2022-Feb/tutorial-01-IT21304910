/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/
#include <stdio.h>

int minimum(int no1,int  no2);
int maximum(int no1, int no2);
int multiply(int no1,int  no2);
int main() 
{
	int min, max, mult,minimum,maximum,multiply;
	int no1,no2;
	 printf("Enter a value for no 1 : ");
     scanf("%d", &no1);
     printf("Enter a value for no 2 : ");
     scanf("%d", &no2);
	min = minimum(no1, no2);
	max = maximum(no1, no2);
	mult =  multiply(no1, no2);
     printf("%d ", min);
     printf("%d ", max);
     printf("%d ",mult);

   return 0;
}
 int minimum(int no1,int  no2)
{
  if(no1<no2)
  {
    return minimum;
    
  }
  }
  int maximum(int no1,int  no2)
  {
    if(no1>no2)
    {
      retrun maximum;
    }
  }
 int multiply(int no1,int  no2)
{
  multiply = no1*no2;
  return multiply;
}
  

