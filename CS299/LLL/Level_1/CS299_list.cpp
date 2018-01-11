#include "CS299_list.h"

int display_allButFirst(node * head)
{
	node * current = head;
	int i = 0;
	int value;
	int value2;
	if (head ==NULL)
	{
		return 0;
	}
	value = head->data;
	current = current->next;
	value2 = current->data;

	while(current != NULL)
	{	
		value2= current->data;
		if (value != value2)
		{
			cout << value2 << endl;
			i++;
		}
		current = current->next;
		
	}

return i;
}
