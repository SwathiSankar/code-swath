#include<stdio.h>
void main()
{
int n,s,i,j,k,m,a[50],x;

printf(“Enter the size of main set :”);
scanf("%d",&n);

printf(“Enter the elements of main set :”);
for(x=0;x<n;x++)
scanf("%d",&a[x]);

for(i=1;i<=n;i++)
{
for(j=0;j<=n-i;j++)
{
if(i==1)
printf("%d\n",a[j]);
else
{
m=j+i-1;
for(k=m;k<n;k++)
{
for(l=j;l<m;i++)
printf(“%d”,a[l]);
printf(“%d\n”,a[k]);
}
}
}
}
}
