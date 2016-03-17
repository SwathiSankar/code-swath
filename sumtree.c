#include<stdio.h>
#include<stdlib.h>



struct tree
{
	int data;
	struct tree *left;
	struct tree *right;
};


struct tree *newnode(int data)
{

	struct tree *node=(struct tree*)malloc(sizeof(struct tree));

	node->data=data;
	node->left=NULL;
	node->right=NULL;

	return node;
}


int sumtree(struct tree *node)
{

	int flag,leftn,rightn;
	if(node==NULL||node->left==NULL||node->right==NULL)
	{
	   flag=1;
	}
	else
	{
        leftn=node->left + node->left->left + node->left->right;
		rightn=node->right + node->right->right;
		if(node->data==leftn+rightn)
		{
			flag=1;
		}
		else
		{
			flag=0;
		}

	}
	return flag;
}



int main()
{
    int sum=0;
	struct tree *root;
	root=newnode(26);
	root->left=newnode(10);
	root->right=newnode(3);
	root->left->right=newnode(6);
	root->left->left=newnode(4);
	root->right->right=newnode(3);

	sum=sumtree(root);
	
	if

	return 0;
}
