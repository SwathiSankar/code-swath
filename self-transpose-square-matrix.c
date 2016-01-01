#include<stdio.h>
#include<conio.h>

void main()
{
 int i,j,n,a[15][15],temp=0;
 printf("Enter the size of the matrix");
 scanf("%d",&n);
 
 printf("Enter the elements of the matrix");
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
   {
    temp=a[i][j];
    a[i][j]=a[j][i];
    a[j][i]=temp;
    }
  }
  
  printf("The transpose of the matrix is \n");
  for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   printf("%d",a[i][j]);
  }printf("\n");
 }
  
  
