#include "CS299_arr.h"

int find_longest(node ** head)
{
	if(!head)
		return 0;
	
	int k = 0;
	int count[SIZE];

	for (int i = 0; i < SIZE; ++i)
	{	int j = 0;

		node * current = head[i];
		while(current)
		{

			current = current->next;
			++j;
		}
		 count[i] = j;
		//cout << count[i] << endl;
		if(k < j)
			k = j;
	}
	/*
	for (int i = 0; i < SIZE; i++)
	{
		if(count[i] == k)
			cout << "Index " << i << ": " << endl;
	}
*/
return k;
}