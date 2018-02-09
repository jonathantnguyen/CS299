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
		}
		current = temp;
	}
return i;
}

/**
 * @brief      Removes every other node
 *
 * @param      head  is set
 *
 * @return     Returns the count;
 */
int remove_every_other(node * & head)
{
	if(!head)
		return 0;

	node * current = head;
	node * temp;
	node * tail;
	int i = 0;
	int j = 0;
	while(current->next != NULL)
	{
		temp = current->next;
		if(i % 2 == 1)
		{
			temp->previous = current->previous;
			temp->previous->next = temp;
			delete current;
			i += 1;
			j += 1;
		}
		else
			i += 1;

		current  = temp;

		if ((current->next == NULL) &&  (i % 2 == 1)) 	//Special case for tail node
		{
			tail = current;
			current->previous->next = NULL;
			delete temp;
		}
	}
return j;
}

int duplicate_2(node * & head)
{
	if(!head)
		return 0;

	node * temp;
	node * current;
	int i;
	while(current->next != NULL)
	{
		cout << temp->data << endl;
		if(current->data == 2)
		{
			temp = new node;
			temp->data = 2;
			//cout << temp->data << endl;
			temp->previous = current;
			temp->next = current->next;
			current->next = temp;
			temp->next->previous = temp;
			current = temp;
			i +=1;
		}
		current = current->next;
	}

	return i;
}