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
		/*
		temp = current->previous;
		temp->next = NULL;
		temp->previous->next = current;
		current->previous = temp->previous;// NEEDS FIXING
		temp->previous = current;
		current->next = temp;
		*/
		int a = current->previous->data;
		int b = current->data;
		int i = a + b;
		return i;
	}
	return swap(head, current->next, temp);
}