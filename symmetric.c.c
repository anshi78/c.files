/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include<stdio.h>

int main() {
    int matrix[n][n];
    int tran[n][n];
    int r, c, count = 1;

    printf("Enter the dimension of the matrix ");
    scanf("%d", &rows);

    printf("Enter the %d elements of the matrix:", rows * rows);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            tran[j][i] = matrix[i][j];
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (matrix[i][j] != tran[i][j]) {
                count++;
                break;
            }
        }
    }

    if (count == 1) {
        printf("The matrix is symmetric");
    } else {
        printf("The matrix is not symmetric");
    }

    return 0;
}
 