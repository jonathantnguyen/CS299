#include "CS299_bst.h"

int add_all_leafs(node * & root, node * & current);
int add(node * & current);


int height_of_tree(node * & root);
int traversal_count(node * & current);


int if_greater(node * & root, node * & current);
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

	if ((current->left == NULL) && (current->right == NULL))
	{
		cout << "Current: " << current->data << endl;
		return current->data + add(current->left) + add(current->right);
	}
	else
	{
		return 0 + add(current->left) + add(current->right);
	}
}

int height_of_tree(node * & root)
{
	node * current = root;

	int height = 0;

	if (!root)
	{
		return 0;
	}

	height = traversal_count(current);

	return height;
}

int traversal_count(node * & current)
{
	if (!current)
	{
		return 0;
	}
	int left_depth = traversal_count(current->left);
	int right_depth = traversal_count(current->right);
	if (left_depth > right_depth)
	{
		cout << "Left: " << left_depth << " Right: " << right_depth << endl;

		return (left_depth+1);
	}
	else
	{
		cout << "Left: " << left_depth << " Right: " << right_depth << endl;

		return (right_depth+1);
	}

}