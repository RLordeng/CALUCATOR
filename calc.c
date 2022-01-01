// preprocessor
 #include <stdio.h>
/*the main function */
int main() {
   //variable declaration
   int number1, number2, sum, subtraction, multi;
   double div;
   printf("First Number is: ");
    scanf("%d", &number1);
   printf("and the second Number is: \n");
   scanf("%d", &number2);
   //addition statement                   
   sum=number1+number2;
   printf("The total is: %d\n", sum);
   //subtraction st3atement
   subtraction=number1-number2;
   printf("The subtraction of the two values is: %d\n", subtraction);
   //multiplication statement
   multi=number1*number2;
   printf("The multiplication result is: %d\n", multi);
   //division statement
   div=number1/number2;
   printf("The division result is: %f\n", div);
   /*C language statements */
   return 0;
   // Rana Lordeng - 642431005 ♡
}