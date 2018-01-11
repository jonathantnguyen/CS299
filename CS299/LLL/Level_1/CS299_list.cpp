#include "CS299_list.h"

int display_allButFirst(node * head)
{
	// Making sure all pointers are pointing to nothing
	node * current;

	int value;
	int value2;

	value = head->data;
	current = current->next;
	value2 = next->data;

	while(value != value2)
	{
		cout << value2 << endl;
		current = current->next;
		value2= next->data;
	}



}