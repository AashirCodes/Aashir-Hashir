#include <stdio.h>
//function prototypes
void inputArray(int rows, int columns,int array[rows][columns]);
void printArray(int rows, int columns, int array[rows][columns]);
void multiplication(int rowsa, int columnsa, int matrix1[rowsa][columnsa], int rowsb, int columnsb, int matrix2[rowsb][columnsb], int result[rowsa][columnsb]);
int main()  {
  //making first array a
  int arows =0; int acolumns = 0;
 printf("Enter the number of rows in first matrix: "); scanf("%d", &arows);
printf("Enter the number of culumns in first matrix: "); scanf("%d", &acolumns);
  int matrixa[arows][acolumns] = {}; 
    inputArray(arows, acolumns, matrixa);
  printArray(arows, acolumns,matrixa);
  //second array
  int brows = 0; int bcolumns =0;
  printf("Enter the number of rows in second matrix: "); scanf("%d", &brows);
  printf("Enter the number of columns in second matrix: "); scanf("%d", &bcolumns);
  int matrixb[brows][bcolumns] = {};
  inputArray(brows, bcolumns, matrixb);
  printArray(brows, bcolumns, matrixb);
  //checking for possibility of multiplication
  if (acolumns != brows) {
    printf("The given matrices are not compatible for multiplication, Try again with different order matrices.");
  }
  //product calculation
  else {
  int product[arows][bcolumns] ={};
  multiplication(arows, acolumns, matrixa, brows, bcolumns, matrixb, product);
  printArray(arows, bcolumns, product);
  }
}

void inputArray(int rows, int columns,int array[rows][columns])   {
  for (int i = 0; i<rows; i++) {
    for (int j = 0; j< columns; j++) {
      printf("Enter the element for row %d and column %d : ", i+1, j+1); scanf("%d", &array[i][j]);
    }
  }
}
void printArray(int rows, int columns, int array[rows][columns])  {
  for (int i = 0; i< rows; i++) {
    printf("[");
    for (int j = 0; j< columns;j++) {
      printf(" %d ", array[i][j]);
    }
    puts("]");
  }
    puts("");
}

void multiplication(int rowsa, int columnsa, int matrix1[rowsa][columnsa], int rowsb, int columnsb, int matrix2[rowsb][columnsb], int result[rowsa][columnsb]) {
  int sum = 0;
  for (int i = 0; i< rowsa; i++){
    for (int j = 0; j< columnsb; j++) {
      for (int k = 0; k < columnsa; k++)  {
        sum += matrix1[i][k]*matrix2[k][j];
      }
    
    result[i][j] = sum;
    sum = 0;
  }
  }
}
