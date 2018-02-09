#include "CS299_dlist.h"

void find_tail(node * & current, node * & tail, node * & head);
int compare_delete(int i, node * & current, node * & tail, node * & target, node * & temp, node * & head);

/**
 * @brief      Defines the tail and calls compare_delete to remove any values
 *             larger than the head.
 *
 * @param      head  The head
 *
 * @return     {returning the number of items deleted}
 */
int remove_larger(node * & head)
{
	if(!head)
		return 0;

	node * current = head;
	node * tail;
	node * temp = current;
	node * target = head;
	int i = 0;

	find_tail(current, tail, head);
	current = head;
	//cout << "Before COMPARE" << endl;

	i = compare_delete(i, current, tail, target, temp, head);
	//cout << "After COMPARE" << endl;

	return i;
}

/**
 * @brief      Find the end of the DLL and have tail point to it.
 *
 * @param      current  The current
 * @param      tail     The tail
 * @param      head     The head
 */
void find_tail(node * & current, node * & tail, node * & head)
{
	while (current->next != NULL)
	{
		current = current->next;

		if(current->next == NULL)
			tail = current;
	}

}
int compare_delete(int i, node * & current, node * & tail, node * & target, node * & temp, node * & head)
{
	current = current->next;
	while(current->next != NULL)
	{
		temp = current->next;
		//cout << "Inside WHILE loop" << endl;
		if (target->data < current->data)
		{
			//cout << "Inside IF statement" << endl;
			temp->previous = current->previous;
			current->previous->next = temp;
			delete current;
			i+=1;
			cout << "Count: " << i << endl;
		}
		current = temp;
	}
return i;
}
