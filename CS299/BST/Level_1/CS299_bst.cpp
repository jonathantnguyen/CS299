#include "CS299_bst.h"

int if_greater(node * & root, node * & current, int count);

int count_greater_than(node * & root)
{
	node * current = root;

	int count = 0;
	
	if(!root || root->right == NULL)
	{
		return 0;
	}
	current = root->right;
	count = if_greater(root, current, count);

	return count;
}

int if_greater(node * & root, node * & current, int count)
{	
	if(current->data > root->data)
	{
		count++;
	}

	if(current->right != NULL)
	{
		return if_greater(root, current->right, count);
	}
	else
	{
		return 0;
	}
	if(current->left != NULL)
	{

		return if_greater(root, current->left, count);
	}
	else
	{
		return 0;
	}

	return count;
}
