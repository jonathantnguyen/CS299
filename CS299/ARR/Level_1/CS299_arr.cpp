#include "CS299_arr.h"

int find_longest(node ** head)
{
	int k;
	if(!head)
		return 0;
	
	int * count = 0;				
	for (int i = 0; i < SIZE; ++i)
	{
		node * current = head[i]
		while(current)
		{
			current = current->next;
			++j;
		}
		if(count[i-1] < j)
			k = j;

		count[i] = j;
	}
}