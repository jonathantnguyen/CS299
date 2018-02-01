#include "CS299_dlist.h"

void find_tail(node * & current, node * & tail, node * & head);

int remove_larger(node * & head)
{
	if(!head)
		return 0;

	node * current = head;
	node * tail;

	int first_val = head->data;
	cout << "Head node value: " << first_val << endl; 

	find_tail(current, tail, head);

	int tail_val = tail->data;

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