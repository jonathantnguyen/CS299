#include "CS299_dlist.h"

int swap (node * & head, node * & current, node * & temp);

int swap_last_2(node * & head)
{
	 if(!head)
	 	return 0;

	 node * temp;
	 node * current = head;

	 return swap(head, current, temp);

}
/*
int swap (node * & head, node * & current, node * & temp)
{

	if (current->next == NULL)
	{
		temp = current->previous;
		current->next = temp;
		current->previous = temp->previous;
		
		temp->previous->next = current;
		temp->previous = current;
		temp->next = NULL;

		int a = temp->data;
		int b = current->data;
		int i = a + b;
		return i;
	}
	else
	{
		return swap(head, current->next, temp);
	}
}

*/



int swap (node * & head, node * & current, node * & temp)
{

	if (current->next == NULL)
	{
	
		cout << "Last Node: " <<current->data << endl;
		cout << "2nd Last Node: " <<current->previous->data << endl;
		
		temp = current->previous;
		cout << "No Change: temp->previous->next->data: " << temp->previous->next->data << endl;
		temp->previous->next = current;
		cout << "New Pointer: temp->previous->next->data: " << temp->previous->next->data << endl;

		current->previous = temp->previous;

		cout << "Current Data: " << current->data << endl;
		cout <<"Current->previous: " << current->previous->data << endl;
		temp->previous = current;
		cout <<"Temp->previous (should be current): " << temp->previous->data << endl;

		if (current->next == NULL)
			cout <<"true"<<endl;
		else 
			cout << "false" << endl;

		current->next = temp;
		
		if (current->next == NULL)
			cout <<"true"<<endl;
		else 
			cout << "false" << endl;
		temp->next = NULL;


		int a = temp->data;
		int b = current->data;
		int i = a + b;
		return i;
	}

	return swap(head, current->next, temp);
}