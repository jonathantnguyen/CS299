#include "CS299_bst.h"

int if_greater(node * & root, node * & current, int count);

int count_greater_than(node * & root)
{
	node * current = root;
	node * parent = current;

	int count = 0;
	
	if(!root)
	{
		return 0;
	}

	count = if_greater(root, current, parent, count);

	return count;
}

int if_greater(node * & root, node * & current, int count)
{
	count++;
	
	if (current->left != NULL)
	{
		return if_greater(root, current->left, count);
	
		if (current->right != NULL)
		{
			return if_greater(root, current->right, count);
		}
	}
		
	return count;
}