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
	
	while(current != NULL) //Checking that it's not at the end of a list
	{	
		value2= current->data;
		if (value != value2)	//If the head value doesn't equal current node value
		{						//print the current node data value
			cout << value2 << endl;
			i++;					// increment counter 
		}
		current = current->next; //traverse to next node
		
	}

return i; 
}

int dataGTLastNode(node * head)
{
	if(!head)
	{
		return 0;
	}

	node * current = head;
	int sumTemp;
	int tailValue;
	int total = 0;

	headValue = head->data;
	current = current->next;

	//Getting to the tail of the list

	while(current != NULL)
	{

		while (current->next == NULL)
		{
			tailValue = current->data;
		}

		current = current->next;
	}

	//Going back to compare
	current = head;

	while (current! = NULL)
	{
		sumTemp = current->data;
		if (sumTemp > tailValue)
		{
			total += sumTemp;
		}

		current = current->next;
	}


return total;
}