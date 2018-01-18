#include "CS299_list.h"

//Place your name here in comments:
//
//
//
int main()
{
    //The following code builds the linear linked list
    node * head = NULL;
    build(head);
    display_all(head);

    //PLEASE PUT YOUR CODE HERE to call the functions
    find(head, match);


    display_all(head);
    destroy(head);    

    return 0;
}

bool find(node * head, int match)
{
	if(!head)
		return 0;
}