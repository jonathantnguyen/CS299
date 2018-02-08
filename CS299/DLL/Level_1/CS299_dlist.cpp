#include "CS299_dlist.h"

void find_tail(node * & current, node * & tail, node * & head);
int compare_delete(int i, node * & current, node * & tail, node * & target);

int remove_larger(node * & head)
{
	if(!head)
		return 0;

	node * current = head;
	node * tail;
	node * target = head;
	int i = 0;

	find_tail(current, tail, head);
	current = head;

	return compare_delete(i, current, tail, target);

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
int compare_delete(int i, node * & current, node * & tail, node * & target)
{
		int i;
		if (current == NULL)
			return 0;

		if((target->data < current->data) && target)
		{	temp = current->previous;
			return compare_delete(current->next, tail, target);
			delete current;
			current = temp;
			temp = temp->previous;
			i++;
		}
		else
			temp = current->previous;
			return compare_delete(current->next, tail, target);
			current = temp;
			temp = temp->previous;

return i;

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

