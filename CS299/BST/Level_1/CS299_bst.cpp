#include "CS299_bst.h"

int if_greater(node * & root, node * & current, int count);

void traverse(node * & current);

int count_greater_than(node * & root)
{
	node * current = root;

	int count = 0;
	
	if(!root || root->right == NULL)
	{
		return 0;
	}
	current = root->right;
	count(root, current, count);

	return count;
}

int if_greater(node * & root, node * & current, int count)
{
	if(current->data > root->data)
	{
		count++;
	}

}

void traverse(node * & current)
{
	if(current->right != NULL)
	{
		if_greater(root, current, count);
		return traverse(node * & current);
	}
	else
	{
		return 0;
	}
	if(current->left != NULL)
	{
		if_greater(root, current, count);
		return traverse(node * & current);
	}

	return 0;
}
