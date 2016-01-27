#include <stdio.h>

int main()
{
     int num,req_num,base;
     printf("Enter the number and the base \n");
     scanf("%d %d",&num,&base);
     
     conversion(num,base);
  
    
     return 0;
     
    
}

void conversion(int num,int base)
{
      int i=0,c=0,a[10];  
      while(num!=0)
      {
              a[i] = num % base;
              num = num / base;
              i++;
              c++;

      }

    for(i=c-1;i>=0;i--)
    {
                if(a[i]<=10)
		{
			printf("%c",a[i]+'0');
		}
		else
		{
			printf("%c",a[i]+55);
		}
	
    }

}
