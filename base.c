#include<stdio.h>

int main()
{
  int n,a[10],i=0,b,c=0,rev=0;
  scanf("%d",&n);
  scanf("%d",&b);
  
  while(n>=1)
  {
   a[i]=n%b;
   n=n/b;
  
   i++;
   c++;
  }
  
  for(i=c-1;i>=0;i--)
   {
      while(a[i]!=0)
       {
         a[i]=a[i]%10;
         rev=rev*10+a[i];
         a[i]=a[i]/10;
       }
       
       
   }
  
}
