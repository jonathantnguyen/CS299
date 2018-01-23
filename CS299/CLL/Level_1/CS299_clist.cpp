#include "CS299_clist.h"

int display_except(node * &rear)
{
	node * current = rear->next;
	int value = 0;
	int total = 0;

	if(!rear)
		return 0;
	if(rear == rear->next)
		return 1;

	while(current != rear)
	{
		value = current->data;
		total += value;
		cout << value << endl;
		current = current->next;
	}

	return total;
}


bool remove_last(node * &rear)
{
	node * current = rear->next;
	node * temp = rear->next;

	if(!rear)
		return 0;
	if(rear == rear->next)
		return 0;
	while(current != rear)
	{
		current = current->next;
		if(current == rear)
		{
			temp = rear->next;
			return 1;
		}
		temp = current;
	}
	return 0;
}