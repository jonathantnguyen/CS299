#include "CS299_dlist.h"

void find_tail(node * & current, node * & tail, node * & head);

int remove_larger(node * & head)
{
	if(!head)
		return 0;

	node * current = head;
	node * tail;

	int first_val = head->data;
	printf("%d \n",first_val); 

	find_tail(current, tail, head);

	//current = head;
	return 0;
}

void find_tail(node * & current, node * & tail, node * & head)
{
	while (current->next != NULL)
	{
		current = current->next;

		if(current->next == NULL)
			tail = current;
	}

}