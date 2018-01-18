#include "CS299_list.h"

bool ifMatch(node * current, int match);

bool find(node * head, int match)
{
	if(!head)
		return false;

	node * current = head;
	ifMatch(current, match);
	
}

bool ifMatch(node * current, int match)
{
	while(current != NULL)
	{	
		if(match == current->data)
		{
			return false;
		}
		current = current->next;
		return (ifMatch(current, match));
	}
	return true;
}
