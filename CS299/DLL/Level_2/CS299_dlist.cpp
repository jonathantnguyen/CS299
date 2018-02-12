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

int swap (node * & head, node * & current, node * & temp)
{
	if(current->next == NULL)
	{
		cout << "Last Node: " <<current->data << endl;
		cout << "2nd Last Node: " <<current->previous->data << endl;
		
		temp = current->previous;
		//cout << "No Change: temp->previous->next->data: " << temp->previous->next->data << endl;
		temp->previous->next = current;
		//cout << "New Pointer: temp->previous->next->data: " << temp->previous->next->data << endl;
		
		if (current->next == NULL)
			cout <<"true"<<endl;
		else 
			cout << "false" << endl;

		current->next = temp->previous
		if (current->next == NULL)
			cout <<"true"<<endl;
		else 
			cout << "false" << endl;

		cout <<"Current->next: " << current->next->data << endl;
		/*
		current->previous = temp->previous;
		temp->previous = current;
		temp->next = NULL;
		current->next = temp;
		*/

		int a = temp->data; //temp->data;
		int b = current->data;
		int i = a + b;
		return i;
	}

	return swap(head, current->next, temp);

}