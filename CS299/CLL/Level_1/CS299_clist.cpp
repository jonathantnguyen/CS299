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
	node * temp = current;

	if(!rear)
		return 0;
	if(rear == rear->next)
		return 0;
	while(current != rear)
	{
		current = current->next;
		if(current->next == rear->next)
		{
			temp->next = rear->next;
			rear = temp;
			return 1;
		}
		temp = current;
	}
	return 0;
}

int copy_all(node * & new_rear, node * source_rear)
{
	node * current = source_rear->next;
	node * temp = current;
	if(!source_rear)
		return 0;
	if(source_rear == source_rear->next)
		return 1;
	new_rear = source_rear;

	node * newCurrent = new_rear->next;
	node * newTemp = newCurrent;

	while(current != source_rear)
	{
		current = current->next;
		newCurrent = current;
		new_rear->next = newCurrent
		newCurrent->next 
	}

}