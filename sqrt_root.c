#include<stdio.h>
int main()
{
    	int n,i;
	    float s=2;
	    printf("enter n");
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	    {
		        s=(s+(n/s))/2;
	    }
	    printf("%f",s);
	    return 0;
}
