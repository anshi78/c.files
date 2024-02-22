/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


#include <stdio.h>

int sum1(int);

int main() {
    int res, a;
    printf("Enter the elements: ");
    scanf("%d", &a);
    res = sum1(a);
    printf("Sum of digits: %d\n", res);
    return 0;
}

int sum1(int n) {
    if (n == 0) {
        return 0;
    } else {
        return (n % 10 + sum1(n / 10));
    }
}