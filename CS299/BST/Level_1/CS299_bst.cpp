#include "CS299_bst.h"

int if_greater(node * & root, node * & current, int count);

int count_greater_than(node * & root)
{
	node * current = root;

	int count = 0;
	
	if(!root || (root->left == NULL))
	{
		return 0;
	}
	
	count++;

	count = if_greater(root, current, count);

	return count;
}

int if_greater(node * & root, node * & current, int count)
{

	if (current->left != NULL)
	{	
		if_greater(root, current->left, count);
		count++;
	
		if (current->right != NULL)
		{
			if_greater(root, current->right, count);
			count ++;
		}
	}
		
	return count;
}