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


int leftsum(struct bintree *node)
 {
        if(node!=NULL)
        {
                  if((node->left==NULL)&&(node->right == NULL))
                  {
                          sum=sum+node->data;
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
	      root->left->left=newnode(2);
	      root->left->right=newnode(1);
	      root->right->left=newnode(8);

        sum=leftsum(root);

	      printf("%d",sum);

	      return 0;
}
