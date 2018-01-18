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


    /* PART */
    int match = 4;

    bool tOF = find(head, match);
    if (tOF)
    	cout << "true" << endl;
    else
    	cout << "false" << endl;

    display_all(head);
    destroy(head);    

    return 0;
}
