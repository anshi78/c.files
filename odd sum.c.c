/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("enter the size");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i+=2){
        sum+=a[i];
    }
    
    for(i=0;i<n;i++){
        printf("%d",sum);
    }
    return 0;
}
