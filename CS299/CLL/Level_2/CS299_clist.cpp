#include "CS299_clist.h"

int remove(node * current, node * rear);
int removal_entire(node * & rear)
{
	if(!rear)
		return 0;

	return remove(rear->next, rear);	
}

int remove(node * current, node * rear)
{
	
	if(current == rear)
		return 1; 
	//node * temp = current->next;
	int count = remove(current->next, rear);
	delete(current);
	//temp->next = NULL;

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