#include <stdio.h>
#define ROWS 3
#define COLUMNS 3
void printArray(const int array[][COLUMNS]);
void inputArray(int array[][COLUMNS]);
void sumArrays(int array[][COLUMNS], int array1[][COLUMNS]);
void productOfArrays(int array[][COLUMNS], int array1[][COLUMNS]);
int main()  {
  int matrix1[ROWS][COLUMNS] = {};
  int matrix2[ROWS][COLUMNS] = {};
 
/*  for (size_t i =0 ;i < ROWS; i++) {
    for (size_t j = 0; j < COLUMNS; j++) {
      printf("Enter the elemend of row %zu and column %zu :", i + 1, j + 1);
      scanf("%d", &matrix1[i][j]);
    }
  } */
  printf("Matrix 1:\n");
  inputArray(matrix1);
  printf("Matrix 1 is:\n");
  printArray(matrix1);
   printf("Matrix 2:\n");
  inputArray(matrix2);
  printf("Matrix 2 is:\n");
  printArray(matrix2);
  puts("");
  puts("The sum of Matrix 1 and Matrix 2 is:");
  
  sumArrays(matrix1, matrix2);
  puts("");
  puts("Product of Matrix 1 and Matrix 2 is: ");
  productOfArrays(matrix1, matrix2);
}
void printArray(const int array[][COLUMNS])  {
  for (size_t i = 0; i < ROWS; i++) {
    printf("[ ");
    for (size_t j = 0; j < COLUMNS; j++) {
      printf("%d ", array[i][j]);
    }
    printf("]\n");
  }
}
void inputArray(int array[][COLUMNS]) {
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLUMNS; j++) {
      printf("Enter the element at row %d and column %d :", i+1,j+1); scanf("%d", &array[i][j]);
    }
  }
}

void sumArrays(int array[][COLUMNS], int array1[][COLUMNS])  {
 int result[ROWS][COLUMNS] = {};
  for (int i =0; i < ROWS; i++) {
    for (int j =0 ; j<COLUMNS; j++) {
      result[i][j] = array[i][j] + array1[i][j];
    }
  }
  printArray(result);
}
void productOfArrays(int array[][COLUMNS], int array1[][COLUMNS]) {
  int product[ROWS][COLUMNS] = {0};
  int sum = 0;
  for (int i = 0; i < ROWS; i++) {
    for (int j =0 ; j < COLUMNS; j++)  {
      for (int k = 0; k < COLUMNS; k++) {
        sum += array[i][k] * array1[k][j];
      }
      product[i][j] = sum;
      sum = 0;


    }
  }
  
  printArray(product);
}
