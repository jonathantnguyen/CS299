#include "CS299_list.h"


bool find(node * head, int match)
{
	if(!head)
		return 0;

	node * current = head;
	if(traverse(head, match));
		return 1;
}

void traverse(node *head, int match)
{
	while ( *current != NULL)
	{
		if (match == *current->data)
		{
			return 1;
		}
		*current = *current->next;
		traverse();
	}
}
