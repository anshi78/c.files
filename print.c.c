/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>


int AE(int arr1[], int st, int l);
 
int main()
{
    int a[100];
    int n, i;

	printf(" Input the size  :");
    scanf("%d",&n);
   
    printf(" Input %d elements in the array ",n);
    for(i=0;i<n;i++)
        {
	      
	      scanf("%d",&a[i]);
	    }
     
    printf(" The elements in the array are  : ");
    AE(a, 0, n);
  
    return 0;
}

int AE(int a[], int st, int l)
{
    if(st >= l)
        return 1;
   
    printf("%d  ", a[st]);
     AE(a, st+1, l);
     

}
