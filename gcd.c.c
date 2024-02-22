/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
int gcd(int,int);
int main(){
    int dd,dv,res,n;
    printf("enter the numbers");
    scanf("%d%d",&dd,&dv);
    res=gcd(dd,dv);
    printf("%d",res);
    return 0;
}

int gcd(int dd,int dv){
    int rem;
    rem=dd%dv;
    if(rem==0){
        return dv;
    }else{
        return(gcd(dv,rem));
    }
}