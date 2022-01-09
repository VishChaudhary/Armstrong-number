#include <math.h>
#include <stdio.h>

int main() 
{
   int num, originalNum, remainder, n = 0; //Initializing the variables
   float result = 0.0;  //Intializing the variables

   printf("Enter an integer: ");    
   scanf("%d", &num);

   originalNum = num;   

   for (originalNum = num; originalNum != 0; ++n) // records the number of digits in num into n
   {
       originalNum /= 10;
   }

   for (originalNum = num; originalNum != 0; originalNum /= 10)
    {
       remainder = originalNum % 10;
      result += pow(remainder, n);      // records the sum of the power of individual digits into result
   }

   if ((int)result == num)  // if num is the same as result, then the number is an Armstrong number
    printf("%d is an Armstrong number.", num);
   else
    printf("%d is not an Armstrong number.", num);
   return 0;
}