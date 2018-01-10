#include "CS299_list.h"

//Place your name here in comments:
// Jonathan Nguyen
// Linear Linked List
////
int main()
{
    //This code sets up the list
    node * head = NULL;

    build(head);
    display_all(head);

    //PLEASE PUT YOUR CODE HERE to call the functions for lab
    int output = display_allButFirst(head);



    display_all(head);
    destroy(head);    

    return 0;
}
