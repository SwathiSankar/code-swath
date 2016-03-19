//
//  election.c
//
//Get the contestents name and the users must cast their  vote . After it is done announcnce the result.
//
//  Created by R.M.D. Engineering College  on 19/03/16.
//
//

#include <stdio.h>
#include<stdlib.h>


int main()
{
    char pname[30][30];
    int n,i,c,vote[30],e=1,j,max,p;
    
  
    
    printf("Enter the number of contstents");
    scanf("%d",&n);
    
    
    for(i=0;i<n;i++)
    {
        printf("Enter the party name");
        scanf("%s",pname[i]);
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d %s \n",i+1,pname[i]);
    }
    
    while(e)
    {
        
    
        printf("\nEnter your choice");
        scanf("%d",&c);
        
        if(c>n)
        {
            printf("Invalid choice");
        }
        else
        {
            vote[c-1]++;
        }
        
        printf("\nIf you want to proceed press 1 else press 0");
        scanf("%d",&e);
        
        
        
    }
    
    max=vote[0];
    for(j=0;j<n;j++)
    {
        if(vote[j]>max)
        {
            max=vote[j];
            p=j;
        }
    }
    
    printf("The election is won by %s with %d votes",pname[p],max);
    
            return 0;
}
