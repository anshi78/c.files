/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


#include <stdio.h>
int power(int,int);
int main(){
    int x,y,res;
    printf("input x,y");
    scanf("%d%d",&x,&y);
    res=power(x,y);
    printf("%d",res);
    return 0;
}

int power(int x,int y){
    int i,res=1;
    for(i=0;i<y;i++){
        res=res*x;
    }
    return res;
}