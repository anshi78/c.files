/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main(){
    int n,i;
    printf("input size");
    scanf("%d",&n);
    int a[n];
    printf("input the elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++){
        if(a[i]>=0){
            a[i]=a[i]*a[i];
        }else{
            a[i]=a[i]*a[i]*a[i];
        }
    }
    
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;
}
