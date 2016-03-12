//
//  leftlesfsum.c
//  
//
//  Created by R.M.D. Engineering College  on 12/03/16.
//
//



#include<stdio.h>
#include<stdlib.h>

int sum=0;

struct bintree
{
    int data;
    struct bintree *left;
    struct bintree *right;
};

struct bintree *newnode(int data)
{
    struct bintree *node=(struct bintree*)malloc(sizeof(struct bintree));
    
    node->data=data;
    
    node->left=NULL;
    node->right=NULL;
    
    return node;
}

int isleaf(struct bintree *node)
{
    
        if(node!=NULL&&(node->left==NULL)&&(node->right == NULL))
        {
            return 1;
        }
        else
        {
            return 0;
        }
   
}


int leftsum(struct bintree *node)
{
    if(node!=NULL)
    {
        if(isleaf(node->left))
        {
            sum=sum+node->left->data;
        }
        
        
        leftsum(node->right);
        leftsum(node->left);
        
    }
    
    
    
    return sum;
}


int main()
{
    
    struct bintree *root=newnode(6);
    root->left=newnode(3);
    root->right=newnode(9);
    root->left->left=newnode(13);
    root->left->right=newnode(1);
    root->right->left=newnode(7);
    
    sum=leftsum(root);
    
    printf("%d",sum);
    
    return 0;
}
