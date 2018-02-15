#include "CS299_arr.h"

int find_longest(node ** head)
{
	int k = 0;
	int j = 0;
	if(!head)
		return 0;
	
	//int * count = 0;				
	for (int i = 0; i < SIZE; ++i)
	{
		node * current = head[i];
		while(current)
		{
			current = current->next;
			++j;
		}
		if(k < j)
			k = j;
	}

return k;
}