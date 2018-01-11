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

    /*DISPLAY ALL ITEMS IN THE LINEAR LINKED 
    LIST THAT DO NOT MATCH THE FIRST NODE'S,
    RETURN THE NUMBER OD DATA ITEMS DISPLAYED*/

    int count = display_allButFirst(head);
    cout <<"My count is: " <<count;



    display_all(head);
    destroy(head);    

    return 0;
}
