#include<stdio.h>
int prime(int n)
{
	  int i,flag=0;
	
	  for(i=2;i<=n/2;i++)
	  {
		    if(n%i==0)
		    {
			    flag=1;
			    break;
		    }
	  }
	  return flag;
}

void main()
{
 	    int num,n,f;
	    printf("Enter the number\n");
	    scanf("%d",&num);
	
	    n=num+1;

	    while(n)
	    {
		          f=prime(n);
		          if(f==0)
		          {
			                printf(" The next prime number is %d",n);
			                break;
		          }
	          	n++;
	    }
}
