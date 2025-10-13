#include <stdio.h>
#include <stdlib.h>
#include "sqrt.h"
void welcomeChoices(void);
void clearScreen(void);
void addition(void);
void subtraction(void);
void multiplication(void);
void division(void);
void power();
void mean();
int factorial(int n);
int fibonacci(int n);
int main()  { //main function will only print the menu and call the choice function
    int choice = 0;
  do {
    clearScreen();
    welcomeChoices();
    scanf("%d", &choice);
    switch (choice) {
      case 1://Addition
        addition();break;
      case 2://Subtraction
        subtraction();break;
      case 3://Multiplication
        multiplication();break;
      case 4://Division
        division();break;
      case 5://Factorial
        printf("----FACTORIAL----\n");
        int number = 0;
        printf("Enter a number :\n"); scanf("%d", &number);
        int facorial = factorial(number);
        printf("The factorial of %d is %d\n", number, facorial); break;
      case 6://Power
        power(); break;
      case 7://Fibonacci
        printf("----FIBONACCI----\n");
       int nu; printf("Enter a number :"); scanf("%d", &nu);
        int result = fibonacci(nu);
        printf("fibonacci(%d) = %d\n", nu, result);break;
      case 8://Mean
        mean();
        break;
      case 9:
        my_sqrt();
        break;
    }
  } while (choice != 10);
printf("Calculator closed. Goodbye! 👋🏼\n");
}
void welcomeChoices() {
    puts("---------------------------");
    puts("    CALCULATOR PROGRAM   ");
    puts("---------------------------");
    puts("1. Add");
    puts("2. Subtract");
    puts("3. Multiply");
    puts("4. Divide");
    puts("5. Factorial");
    puts("6. Power");
    puts("7. Fibonacci");
    puts("8. Mean ");
    puts("9. Square root");
    puts("10. Exit");
    puts("---------------------------");
    printf("Enter your choice: \n");
}
void addition(void)  {
  printf("----ADDITION----\n");
  int ans = 0;int number = 0;
  while (1) {
    printf("Enter a number:(enter 0 to fininsh) \n"); scanf("%d", &number);
    if (number == 0) { break; }
    ans += number;
  }
  printf("The sum is %d\n", ans);
}
void subtraction(void)  {
  printf("----SUBTRACTION----\n");
  int ans = 0; int number = 0;
  printf("Enter a number: \n"); scanf("%d", &ans);
  while (1) {
    printf("Enter a number: (enter 0 to finish)\n"); scanf("%d", &number);
    if (number == 0) { break; }
    ans -= number;
  }
  printf("The total difference is: %d \n", ans);
}
void multiplication(void)  {
  printf("----MULTIPLICATION----\n");
  int ans = 1;int number = 0;
  while (1) {
    printf("Enter a number: (enter 0 to finish)\n"); scanf("%d", &number);
    if (number == 0) { break; }
    ans = ans*number;
  }
  printf("The product of the numbers is %d\n", ans);
}
void division(void)  {
  printf("----DIVISION----\n");
  float ans; int dividend =0; int divisor =0;
  printf("Enter the dividend: "); scanf("%d", &dividend);
  printf("Enter the divisor: "); scanf("%d", &divisor);
  ans = (float)dividend/divisor;
  printf("%d divided by %d equals: %f \n", dividend, divisor,ans);
}
int factorial(int n)  {  
if (n == 0 ) {
    return 1;
}
else {
    return n* factorial(n-1);
  }

}
int fibonacci(int n)  {
  if (n ==0 || n == 1) {
    return n;
   } 
  else { return fibonacci(n-1) + fibonacci(n-2);}
}
void power()  {
  printf("----POWER----\n");
  int base = 0; int exponent =0; int answer = 1; int n =0;
  printf("Enter the base number: "); scanf("%d", &base);
  printf("Enter the exponent: "); scanf("%d", &exponent);
  do {
    answer = answer * base;
    n++;
  } while (n < exponent);
  printf("The base %d raised to the power %d is: %d\n",base,exponent, answer);
}
void mean()  {
  printf("----MEAN----\n");
  int sum = 0;int input = 0; int count =-1;
  do {
  printf("Enter a Number  (0 to stop)\n"); scanf("%d", &input);
    sum += input;
    count++;
  } while (input != 0);
  float average = (float)sum/count;
  printf("Mean of the given numbers is %.1f\n", average);
}
void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
//working and completed!
