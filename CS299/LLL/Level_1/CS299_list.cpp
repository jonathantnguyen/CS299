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

	//Getting to the tail of the list

	while(current != NULL)
	{

		while (current->next == NULL)
		{
			tailValue = current->data;
			break;
		}

		current = current->next;
	}

	//Going back to compare
	current = head;

	while (current != NULL)
	{
		sumTemp = current->data;
		if (sumTemp > tailValue)
		{
			cout << sumTemp << endl;
			total += sumTemp;
		}

		current = current->next;
	}


	return total;
}

bool find_last_two(node * head)
{
	bool statement;
	int lastValue;
	int secondTLValue;


	if(!head)
	{
		return 0;
	}

	node * current = head;
	node * lastNode, * secondTLNode;

	//Find the last two nodes

	while(current != NULL)
	{
		secondTLNode = current; //Continues to store the pointer to the current data before traversing to the next node

		while (current->next == NULL) //When the last node is found, but looking at it's NULL next
		{
			lastNode = current; //It will store the last node and break of the first while loops
			break;
		}

		current = current->next;	//If it was the last node, it will kick out, if it's not it will continue to find the last node.
	}

	//Storing last known pointers to dummy variables

	secondTLValue = secondTLNode->data;
	cout << secondTLValue << endl;
	lastValue = lastNode->data;
	cout << lastValue << endl;

	//Going back to compare values

	current = head;
	int temp;
	temp = current->data;
	cout << "Head value: "<< temp << endl;

	while(current != NULL && ((current != lastNode) || (current !=secondTLNode)))
	{
		
		if ((lastValue || secondTLValue) == current->data)
			statement = true;
		else
		{
			statement = false;
		}
		current = current->next;
	}

return statement;
}