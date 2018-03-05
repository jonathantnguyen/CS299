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
	
	count++;

	count = if_greater(root, current);

	return count;
}


int if_greater(node * & root, node * & current)
{
	if(!current)
	{
		return 0;
	}
	cout << "Current: " << current->data << endl;
	if (current->data == root->data)
	{
		count++;
	}

	if_greater(root, current->left);

	if_greater(root, current->right);
		
	return count;
}