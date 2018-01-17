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
		if (current->next == NULL) //When the last node is found, but looking at it's NULL next
		{
			lastNode = current; //It will store the last node and break of the first while loops
		}
		else
			secondTLNode= current;

		current = current->next;	
	}

	//Storing last known pointers to dummy variables

	secondTLValue = secondTLNode->data;
	lastValue = lastNode->data;

	//Going back to compare values

	current = head; 

	while((current != NULL) && (current != secondTLNode))
	{
		if ((lastValue == current->data) || (secondTLValue == current->data))
			statement++;
		else
			statement = false;

		current = current->next;
	}
	cout << statement << endl;

return statement;
}

float append(node *&head, int to_add)
{
	float sumTotal = 0;
	float j = 0;
	int tempHolder;
	float avg;

	if(!head)
	{
		return 0;
	}	

	node * current = head;
	node * newNode;

	while(current != NULL && (current != newNode)) //Making sure that it doesn't to continue to add new nodes infinitely.	
	{	
		if (current->next == NULL)
		{
			newNode = new node;
			current->next = newNode;
			newNode->data = to_add;
			newNode->next = NULL;
			
 		}
		else
			current = current->next;
	}
	// Going back to the start of the list to add up
	current = head;
	while(current != NULL)
	{
		j++;
		tempHolder = current->data;
        sumTotal += tempHolder;
        cout << sumTotal << endl;
		current = current->next;
	}
	cout << sumTotal << endl;
	cout << j << endl;
	avg = sumTotal/j;

return avg;
}
