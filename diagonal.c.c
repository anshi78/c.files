/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


#include <stdio.h>

int main() {
    int a[5][5], i, j, r, c, sum = 0;
    
    printf("Input the number of rows and columns ");
    scanf("%d %d", &r, &c);
    
    if (r != c) {
        printf("Error: Input matrix must be square");
        return 1;
    }

    printf("Input the elements of the matrix");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    for (i = 0; i < r; i++) {
        sum += a[i][r - i - 1];
    }
    
    printf("Sum of the secondary diagonal elements %d", sum);
    
    return 0;
}
