#include "CS299_clist.h"


int removal_entire(node * & rear)
{
	if(!rear)
		return 0;

	return traverse(rear->next, rear);	
}

int traverse(node * current, node * rear)
{
	node * current = rear;
	node * temp = current;
	if(current == rear)
		return 1;

	int count = foo(current->next, rear);
	delete current;
	rear = NULL;


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