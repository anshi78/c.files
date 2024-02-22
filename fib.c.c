/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


#include <stdio.h>
void fib(int);
int main(){
    int n;
    printf("input numbers");
    scanf("%d",&n);
    fib(n);
    return 0;
}

void fib(int n1){
    int i,f=0,s=1,t;
    if(n1==1){
        printf("%d",f);
    }else if(n1==2){
        printf("%d%d",f,s);
    }else{
        printf("%d\n%d\n",f,s);
    }for(i=0;i<n1-2;i++){
        t=f+s;
        printf("%d",t);
        f=s;
        s=t;
    }
}