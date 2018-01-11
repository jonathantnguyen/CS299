#include "CS299_list.h"

int display_allButFirst(node * head)
{
	node * current = head;

	int value;
	int value2;

	value = head->data;
	cout << value << endl;
	current = current->next;
	value2 = current->data;

	while(current != NULL)
	{	
		value2= current->data;
		if (value != value2)
		{
			cout << value2 << endl;
		}
		current = current->next;
		
	}

return 0;
}
