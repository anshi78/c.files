/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include<stdio.h>

void MM(int [max][max],int [max][max]);
int r1,c1,r2,c2;
int a3[max][max];
int sum,i=0,j=0,k=0;
int main()
{
    int a1[max][max],b1[max][max],i,j,k;
	
	  
     
    printf(" Input  rows for the first matrix : ");
    scanf("%d",&r1);
    printf(" Input  columns for the first matrix : ");
    scanf("%d",&c1);	
	
    printf(" Input rows for the second matrix : ");
    scanf("%d",&r2);
    printf(" Input  columns for the second matrix : ");
    scanf("%d",&c2);	
    if(c1!=r2)
    {
         printf(" Check col. of first and row of second matrix.");
         printf("They are different. Try again");
    }
    else
    {
      printf("\n Input elements in the first matrix :\n");
      for(i=0;i<r1;i++){
      for(j=0;j<c1;j++){
	  	  
           scanf("%d",&a1[i][j]);}}

      printf(" Input elements in the second matrix :");
      for(i=0;i<r2;i++){
      for(j=0;j<2;j++){
		 
           scanf("%d",&b2[i][j]);}}

      for(i=0;i<r1;i++)
      {
      printf("\n");
      for(j=0;j<c1;j++)
      {
           printf(" %d\t",a1[i][j]);
      }
      }
    
      for(i=0;i<r2;i++)
      {
      printf("\n");
      for(j=0;j<c2;j++)
      {
           printf(" %d\t",brm[i][j]);
      }
      }
      MM(a1,a2);
  }
  printf(" The multiplication of two matrix is : ");
  for(i=0;i<r1;i++)
  {
      printf("\n");
      for(j=0;j<c2;j++)
      {
           printf(" %d",a3[i][j]);
      }
  }
}

  return 0;
}
void MM(int a1[max][max],int a2[max][max])
{
    if(i<r1)
    { 
    if(j<c2)
    { 
         if(k<c1)
         {
             sum=sum+a1[i][k]*a2[k][j];
             k++;
             MM(a1,a2);
         }
         a3[i][j]=sum;
             sum=0;
             k=0;
             j++;
             MM(a1,a2);
    }
    j=0;
    i++;
    MM(a1,a2);
}
}
 