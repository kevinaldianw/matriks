/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
 
int main()
{
  int c, d, k, sum = 0;
  int matriks[3][4] = {{4,2,3,5},{1,5,7,8},{8,0,2,2}};
  
  int transpose[4][3], hasilKali[3][3];
 
  for (c = 0; c < 3; c++)
    for (d = 0; d < 4; d++)
      transpose[d][c] = matriks[c][d];

  
  for (c = 0; c < 3; c++) {
    for (d = 0; d < 3; d++) {
      for (k = 0; k < 4; k++) {
        sum = sum + matriks[c][k]*transpose[k][d];
    }
 
    hasilKali[c][d] = sum;
    sum = 0;
    }
  }
 
  printf("Matriks:\n");
 
  for (c = 0; c < 3; c++) {
    for (d = 0; d < 4; d++)
      printf("%d\t", matriks[c][d]);
 
    printf("\n");

  }
  
  printf("Transpose:\n");
 
  for (c = 0; c < 4; c++) {
    for (d = 0; d < 3; d++)
      printf("%d\t", transpose[c][d]);
 
    printf("\n");

  }
 
  printf("Hasil Kali:\n");
 
  for (c = 0; c < 3; c++) {
    for (d = 0; d < 3; d++)
      printf("%d\t", hasilKali[c][d]);
 
    printf("\n");

  }
 
  return 0;
}