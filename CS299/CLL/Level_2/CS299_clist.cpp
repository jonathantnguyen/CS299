#include "CS299_clist.h"

int traverse(node * current, node * rear);
int removal_entire(node * & rear)
{
	if(!rear)
		return 0;

	return traverse(rear->next, rear);	
}

int traverse(node * current, node * rear)
{
	
	if(current == rear)
		return 1;
	
	else
		int count = traverse(current->next, rear);

	return count+1;
}





/*int foo(node *rear)
{
	if(!rear)
		return 0;
	return foo(rear->next, rear);
}
int foo(node * current, node * rear)
{
	if(current == rear)
	{
		return 1;
	}
	//foo

	int result = foo(current->next,rear);
	return result;
}

*/

/*

*/