#include "CS299_dlist.h"

void find_tail(node * & current, node * & tail, node * & head);
int compare_delete(int i, node * & current, node * & tail, node * & target, node * & temp);

int remove_larger(node * & head)
{
	if(!head)
		return 0;

	node * current = head;
	node * tail;
	node * temp;
	node * target = head;
	int i = 0;

	find_tail(current, tail, head);
	current = head;

	return compare_delete(i, current, tail, target, temp);

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
int compare_delete(int i, node * & current, node * & tail, node * & target, node * & temp)
{
		if (current == NULL)
			return 0;

		if((target->data < current->data) && target)
		{	temp = current->previous;
			return compare_delete(current->next, tail, target, temp);
			delete current;
			current = temp;
			temp = temp->previous;
			i++;
		}
		else
			temp = current->previous;
			return compare_delete(current->next, tail, target, temp);
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

