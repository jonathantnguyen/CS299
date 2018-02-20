#include "CS299_arr.h"

int find_longest(node ** head)
{	
	int k = 0;
	int count[SIZE];

	for (int i = 0; i < SIZE; ++i)
	{	
		int j = 0;

		node * current = head[i];
		while(current)
		{
			current = current->next;
			++j;
		}
		count[i] = j;
		if(k < j)
			k = j;
	}
	
	for (int j = 0; j < SIZE; ++j)
	{
		if(count[j] == k)
			cout << "Index " << j << ": " << k << endl;
	}

return k;
}

int remove_last(node ** head, int size)
{	
	int k = 0;
	for (int i = 0; i < SIZE; i++)
	{
		node * temp = current;
		node * current = head[i];
		if (!head[i])
			break;
		else
		{
			while(current)
			{
				if (current->next->next != NULL)
					current = current->next;
				else
				{
					temp = current->next->next;
					delete temp;
					current->next = NULL;
					k++;
				}
			}
		}
	}
	return k;
}
