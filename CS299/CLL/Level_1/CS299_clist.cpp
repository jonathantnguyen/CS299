#include "CS299_clist.h"

int display_except(node * &rear)
{
	node * current = rear;
	int value;
	int total;

	if(!rear)
		return 0;
	if(rear == rear->next)
		return 1;

	while(current != rear)
	{
		value = current->data;
		//total += value;
		cout << value << endl;
		current = current->next;
	}

	return total;
}