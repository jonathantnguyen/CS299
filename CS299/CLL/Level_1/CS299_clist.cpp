#include "CS299_clist.h"

int display_except(node * &rear)
{
	int node * current = rear;
	
	if(!rear)
		return 0;
	if(rear == rear->next)
		return 1;

	while(current != rear)
	{
		cout << current->data << endl;
		current = current->next;
	}

}