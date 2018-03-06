#include "CS299_bst.h"

int if_greater(node * & root, node * & current);

int add_all_leafs(node * & root, node * & current);

int count_greater_than(node * & root)
{
	node * current = root;

	int count = 0;
	
	if(!root || (root->left == NULL))
	{
		return 0;
	}
	
	//cout << "Root: " << root->data << endl;

	count = if_greater(root, current);

	return count;
}


int if_greater(node * & root, node * & current)
{
	if(!current)
		return 0;
	//cout << "Current: " << current->data << endl;
	if (current->data > root->data)
		return 1 + if_greater(root, current->left) + if_greater(root, current->right);
	else
		return 0 + if_greater(root, current->left) + if_greater(root, current->right);
}

int add_all_leafs(node * & root)
{
	node * current = root;
	int sum = 0;
	
	if (!root)
	{
		return 0;
	}

	sum = add(current);

	return sum;

}

int add(node * & current)
{
	if (!current)
	{
		return 0;
	}

	if ((current->left != NULL) && (current->right != NULL))
	{
		return 1 + add(current->left) + add(current->right);
	}
	else
	{
		return 0 + add(current->left) + add(current->right);
	}
}

