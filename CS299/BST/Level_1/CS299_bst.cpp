#include "CS299_bst.h"

int if_greater(node * & root, node * & current);

int count_greater_than(node * & root)
{
	node * current = root;

	int count = 0;
	
	if(!root || (root->left == NULL))
	{
		return 0;
	}
	
	cout << "Root: " << root->data << endl;

	count = if_greater(root, current, count);

	return count;
}


int if_greater(node * & root, node * & current)
{
	if(!current)
		return 0;
	cout << "Current: " << current->data << endl;
	if (current->data == root->data)
		return 1 + if_greater(root, current->left, count) + if_greater(root, current->right, count);
	else
		return 0 + if_greater(root, current->left, count) + if_greater(root, current->right, count);
}