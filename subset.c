#include<stdio.h>
void main()
{
int n,i,j,k,a[50],x,y,z;

printf("Enter the size  :");
scanf("%d",&n);

printf("Enter the elements:");
for(x=0;x<n;x++)
scanf("%d",&a[x]);

printf("The subsets are :\n");

for(i=1;i<=n;i++)
 {
  for(j=0;j<=n-i;j++)
  {
   if(i==1)
   {
    printf("%d\n",a[j]);
   }
   else
   {
    z=j+i-1;
    for(k=z;k<n;k++)
     {
      for(y=j;y<z;y++)
      {
        printf("%d",a[y]);
      }
        printf("%d\n",a[k]);
     }
   }
  }
 }
}
