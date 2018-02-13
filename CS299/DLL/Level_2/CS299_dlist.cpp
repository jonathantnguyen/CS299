#include "CS299_dlist.h"

int swap (node * & current);

int swap_last_2(node * & head)
{
	 if(!head)
	 	return 0;

	 node * current = head;

	 return swap(current);

}

int swap (node * & current)
{
	if (current->next == NULL)
	{

		current->previous->next = NULL; // 2nd to last node NEXT to NULL
		current->previous->previous->next = current; //3rd to last node NEXT to Current
		current->next = current->previous; //Current NEXT to 2nd to last node
		current->previous->previous = current;// 2nd to last PREVIOUS to Current
		current->previous-> = current->previous->previous; //Current PREVIOUS to 3rd to last node


		int a = current->previous->data;
		int b = current->data;
		int i = a + b;
		return i;
	}
	else
	{
		return swap(current->next);
	}
}


/*

int swap (node * & current)
{	
	node * temp;

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

*/