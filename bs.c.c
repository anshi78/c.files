/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
int bS(int*, int, int, int, int);

int main()
{
    int a1[10], i, n, md, c, low, hg;

    
    printf(" Input the number of elements ");
    scanf("%d", &n);
    printf(" Input %d numbers of elements in the array in ascending order ", n);
    for (i = 0; i < n; i++) 
    {
       
        scanf("%d", &arr1[i]);
    }
    printf(" Input the number to search : ");
    scanf("%d", &md);
    low = 0, hg = n - 1;
    c = bS(arr1, n, md, low, hg);
    if (c == 0)
        printf("  number not exists in the array");
    else
        printf("  number exists in the array");
    return 0;
}

int bS(int arr1[], int n, int md, int low, int hg)
{
    int mid, c = 0;
    if (low <= hg) 
    {
 if (low <= hg) 
    {
        mid = (low + hg) / 2;
        if (md == arr1[mid]) 
        {
            c = 1;
        }
        else if (md < arr1[mid]) 
        {
            return bS(arr1, n, md, low, mid - 1);
        }
        else
            return bS(arr1, n, md, mid + 1, hg);
    }
    else
   return c;
}