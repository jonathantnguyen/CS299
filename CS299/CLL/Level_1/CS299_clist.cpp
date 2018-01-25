 #include "CS299_clist.h"

int display_except(node * &rear)
{
	node * current = rear->next;
	int value = 0;
	int total = 0;

	if(!rear)
		return 0;
	if(rear == rear->next)
		return 1;

	while(current != rear)
	{
		value = current->data;
		total += value;
		cout << value << endl;
		current = current->next;
	}

	return total;
}


bool remove_last(node * &rear)
{
	node * current = rear->next;
	node * temp = current;

	if(!rear)
		return 0;
	if(rear == rear->next)
		return 0;
	while(current != rear)
	{
		current = current->next;
		if(current->next == rear->next)
		{
			temp->next = rear->next;
			rear = temp;
			return 1;
		}
		temp = current;
	}
	return 0;
}

int copy_all(node * & new_rear, node * source_rear)
{
	node * current = source_rear;
	node * temp = new_rear;
	node * newNode;
	if(!source_rear)
		return 0;
	if(source_rear == source_rear->next)
		return 0;

	new_rear = source_rear;
	temp->data = source_rear->data;
	current = current->next;
	int count;
	count++:
	while (current->next != source_rear)
	{
		newNode = new node();
		temp = newNode;
		newNode->data = temp->data;
		new_rear->next = temp;
		current = current->next;
	}
	temp = new_rear;

	if(!new_rear)
		return 0;
	if(new_rear == new_rear->next);
		return 0;

	int val = 0;

	while(temp->next != new_rear)
	{
		val = temp->data;
		temp = temp->next;
		cout << val << endl;
		count++;
	}

	return count;
}