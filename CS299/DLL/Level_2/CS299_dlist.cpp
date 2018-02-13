#include "CS299_dlist.h"

int swap (node * & current);

int swap_last_2(node * & head)
{
	 if(!head)
	 	return 0;

	 node * current = head;

	 return swap(current);

}

/*
int swap (node * & current)
{
	node * temp;

	if (current->next == NULL)
	{
		cout << ""
		temp = current->previous;

		temp->next = NULL;
		temp->previous->next = current;
		current->previous = temp->previous;
		temp->previous = current;
		current->next = temp;

		int a = temp->data;
		int b = current->data;
		int i = a + b;
		return i;
	}
	else
	{
		return swap(current->next);
	}
}

*/

int swap (node * & current)
{	
	node * temp;

	if (current->next == NULL)
	{
	
																	cout << "Last Node: " <<current->data << endl;
																	cout << "2nd Last Node: " <<current->previous->data << endl;
		
		temp = current->previous;
																		
		if (temp->next == NULL)
			cout << "temp->next: true" << endl;
		else 
			cout << "temp->next: false" << endl;

		temp->next = NULL;

		if (temp->next == NULL)
			cout << "temp->next: true" << endl;
		else 
			cout << "temp->next: false" << endl;
																	cout << "No change in 3rd to last (should be temp): " << temp->previous->next->data << endl;
		temp->previous->next = current;
																	cout << "New Pointer: temp->previous->next->data: " << temp->previous->next->data << endl;

		current->previous = temp->previous;
																	cout << "Current Data: " << current->data << endl;
																	cout <<"Current->previous: " << current->previous->data << endl;
		temp->previous = current;
																	cout <<"Temp->previous (should be current): " << temp->previous->data << endl;
		
		if (current->next == NULL)
			cout << "IS NULL? current->next: true"<<endl;
		else 
			cout << "false" << endl;

		current->next = temp;

		if (current->next == NULL)
			cout <<"true"<<endl;
		else 
			cout << "IS NULL? current->next: false" << endl;


																		cout << "temp->data: " << temp->data << endl;
																		cout << "current->data" << current->data << endl;
		int a = temp->data;
		int b = current->data;
		int i = a + b;
		return i; 
	}
	else
	{
		return swap(current->next);
	}
}