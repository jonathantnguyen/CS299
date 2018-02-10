#include "CS299_dlist.h"

int swap (node * & head, node * & current, node * & temp);

int swap_last_2(node * & head)
{
	 if(!head)
	 	return 0;

	 node * temp;
	 node * current = head;

	 return swap(head, current, temp);

}

int swap (node * & head, node * & current, node * & temp)
{
	if(current->next == NULL)
	{
		temp = current->previous;
		temp->next = NULL;
		temp->previous->next = current;
		current->previous = temp->previous;
		temp->previous = current;
		current->next = temp;

		int i = current->data + temp->data;
		return i;
	}
	return swap(head, current->next, temp);
}