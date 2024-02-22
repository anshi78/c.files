/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main(){
int a[5][5],i,j,r,c;
printf("input r and c:");
scanf("%d%d",&r,&c);
if(r==c){
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
    
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(i==j&& a[i][j]%2==0){
                printf("%d",a[i][j]);
            }else{
        printf("not a square matrix");
    }
        }
    }
    return 0;
    
}
