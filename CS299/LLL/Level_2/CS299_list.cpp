#include "CS299_list.h"

int traverse(node * current, int match);

bool find(node * head, int match)
{
	if(!head)
		return 0;

	node * current = head;
	return (traverse(current, match));
	
}

int traverse(node * current, int match)
{
	while(current != NULL)
	{	
		if(match == current->data)
		{
			return 0;
		}
		current = current->next;
	}
	return 1;

}
