#include "CS299_dlist.h"

void find_tail(node * & current, node * & tail, node * & head);
int compare_delete(int i, node * & current, node * & target, node * & temp, node * & head);

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
	node * temp = current;
	node * target = head;
	int i = 0;

	current = head;
	return compare_delete(i, current, target, temp, head);

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

/**
 * @brief      Going from head to tail, check if the value is larger than head,
 *             if so, delete, and rearrange the pointers.
 *
 * @param[in]  i        counts how many times we've deleted nodes
 * @param      current  The current node, DYNAMIC
 * @param      target   The target node, STATIC
 * @param      temp     The temporary node DYNAMIC
 * @param      head     The head node, STATIC
 *
 * @return     Returns i, the count
 */
int compare_delete(int i, node * & current,node * & target, node * & temp, node * & head)
{
	current = current->next;
	while(current->next != NULL)
	{
		temp = current->next;
		if (target->data < current->data)
		{
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
