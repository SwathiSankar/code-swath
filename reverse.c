#include <stdio.h>

int main()
{
   int n,r,rev;
     printf("Enter the number to be reversed");
     scanf("%d",&n);
  
     while(n!=0)
     {
          r = n % 10;
          rev = (rev*10) + r ;
          n = n / 10;
     }
     printf("\n The reversed no is %d",rev);
     return 0;
     
    
}

