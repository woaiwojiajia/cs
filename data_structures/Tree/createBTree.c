#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct node{
	int data;
	struct node *left;
	struct node *right;
}BTree;

int BTreeCreate(BTree **tp)
{
	int x;
	scanf("%d",&x);
	if(x<0)
	{
		*tp=NULL;
		return 0;
	}
	*tp=(BTree *)malloc(sizeof(BTree));
	if(tp==NULL)
		return 0;
	(*tp)->data=x;
	BTreeCreate(&((*tp)->left));
	BTreeCreate(&((*tp)->right));
	return 1;
} 

int main()
{
	BTree *tree;
	print("Create binary tree:\n");
	BTreeCreate(&tree);
	
	return 0;
}
