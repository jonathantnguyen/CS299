#include "CS299_dlist.h"

void find_tail(node * & current, node * & tail, node * & head);
int compare_delete(node * & current, node * & tail, node * & head);

int remove_larger(node * & head)
{
	if(!head)
		return 0;

	node * current = head;
	node * tail;

	find_tail(current, tail, head);
	return compare_delete(current, tail, head);


	//current = head;
}

void find_tail(node * & current, node * & tail, node * & head)
{
	while (current->next != NULL)
	{
		current = current->next;

		if(current->next == NULL)
			tail = current;
	}

}
int compare_delete(node * & current, node * & tail, node * & head)
{
	int head_val = head->data;
	int current_val = current->data;

	node * temp = current;
	
	if(current != tail)
		return 0;

	while(current != head)
	{
		current_val = current->data;
		if(head_val > current_val)
		{
			current = current->previous;
			tail = current;
			current->next = NULL;
			delete(temp);
			cout << "VALUE DELETED: " << current_val << endl;
		}

	}




	/*current = current->next;

	cout << "Head Value: " << head_val << endl;
	while(current->next != NULL)
	{
		temp = current->next->next;
		current_val = current->data;
		cout << "Current Value: " << current_val << endl;
		if (head_val > current_val)
		{
			head->next = temp;
			temp->previous = head;
			delete(current);
		}

		current = current->next;

*/
	}
}