#include "CS299_bst.h"

int if_greater(node * & current, int count);

int count_greater_than(node * & root)
{
	node * current = root;

	int count = 0;
	
	if(!root)
	{
		return 0;
	}

	count = if_greater(current, count);

	return count;
}

int if_greater(node * & current, int count)
{
	
	if (current->left != NULL)
	{	
		return if_greater(current->left, count++);
	
		if (current->right != NULL)
		{
			return if_greater(current->right, count++);
		}
	}
		
	return count;
}