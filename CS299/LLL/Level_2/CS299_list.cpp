#include "CS299_list.h"

int traverse(node * current, int match);

bool find(node * head, int match)
{
	if(!head)
		return 0;

	node * current = head;
	if(traverse(current, match));
		return 1;
}

int traverse(node * current, int match)
{
	while (current != NULL)
	{	
		if (match == current->data)
		{
			return 1;
		}
		current = current->next;
		traverse(current, match);
	}
	return 0;
}
