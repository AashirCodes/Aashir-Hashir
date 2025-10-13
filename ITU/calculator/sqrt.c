#include <stdio.h>
#include "sqrt.h"
int check(int x, int y);
void my_sqrt()  {
  int radicand = 0;
  printf("Enter a positive, non-zero Integer: "); scanf("%d", &radicand);
  float guess = radicand/2;
  
  int status = check(guess, radicand);
    do {
  status = check(guess, radicand);
  if (status == 1) {
    guess = (guess + radicand)/guess;
  }}
  while (status != -1);
  printf("The approximate square root of %d is : %.0f\n", radicand, guess); 
}
int check(int x, int y) {
  if (x*x != y) {
    return 1; 
  }
  else {
    return -1;
  }
}
