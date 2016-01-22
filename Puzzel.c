#include<stdio.h>


void display(int [4][4]);


int main()
{
    int  a[4][4]={{2,1,4,3},{6,5,0,7},{9,8,11,10},{13,12,15,14}};
	
	char d;
	int row,col,i,j,temp=0;
	printf("Press U-> Up , D-> Down , L->Left , R->Right\n");
    do
	{
    	int i,j;
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
    	    {
    		    if(a[i][j]==0)
    		    {
    	            row=i;
    	            col=j;
    		    }
            }
        }
        
    	scanf("%c",&d);
    	switch(d)
    	{
    	      case 'U': i=row-1;
                      j=col;
                      break;
                      
             case 'D':i=row+1;
                      j=col;
                      break;
                      
             case 'L':i=row;
                      j=col-1;
                      break;
                      
             case 'R':i=row;
                      j=col+1;
                      break;
    	  
    		     case 'Q':
    			            break;
    	}
    	
    	if((i!=-1)&&(i!=4)&&(j!=-1)&&(j!=4))
         {
                        temp=a[row][col];
                        a[row][col]=a[i][j];
                       a[i][j]=temp;
         }
         
      
    	
    	
    	
    	
    }while(d!='Q');
    
    display(a);
    return 0;
}








void display(int a[4][4])
{
    int i,j;
    for( i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",a[i][j]);
        }
	printf("\n");
    }
}

