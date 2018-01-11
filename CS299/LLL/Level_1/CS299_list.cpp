#include "CS299_list.h"

int display_allButFirst(node * head)
{
	

	if (!head) //Check if head is NULL/EMPTY LIST
	{
		return 0; //If so, kick out
	}

	node * current = head; //Setting the current pointer to where the head is pointing
	int i = 0; 
	int value;
	int value2;

	value = head->data;	//we place the head data value into a dummy variable
	current = current->next; //Traveresing
	//value2 = current->data; //Tak

	while(current != NULL)
	{	
		value2= current->data;
		if (value != value2)	//If the head value doesn't equal current node value
		{						//print the current node data value
			cout << value2 << endl;
			i++;					// increment counter 
		}
		current = current->next;
		
	}

return i;
}

int dataGTLastNode(node * head)
{

return 0;
}