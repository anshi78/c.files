/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main(){
    int a[5][5],r,c,i,j,max;
    printf("input r and c");
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
        
    }
    max=a[0][0];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(max<a[i][j]){
                max=a[i][j];
            }
        }
    }
    printf("%d",max);
    return 0;
}
