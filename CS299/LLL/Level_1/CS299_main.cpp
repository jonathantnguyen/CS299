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

    /*DISPLAY ALL ITEMS IN THE LINEAR LINKED LIST THAT DO NOT MATCH 
    THE FIRST NODE'S, RETURN THE NUMBER OD DATA ITEMS DISPLAYED*/

    //int count = display_allButFirst(head);
    //cout <<"My count is: " <<count;

    

    /*SUM ALL OF THE DATA THAT IS LARGER THAN THE LAST NODE'S DATA
    ADD A NEW NODE AT THE END WITH THIS SUM RETURN THE SUM CALCULATED*/

    //int sum = dataGTLastNode(head);
    //cout << "My sum is: " << sum;

    /*FIND OUT IF THE LAST TWO NUMBERS APPEAR MORE THAN ONCE
    THIS FUNCTION SHOULD RETURN TRUE IF ONE OF THE LAST TWO NODE'S APPEARS
    MORE THAN ONCE AND FALSE OTHERWISE.*/

    bool statement = find_last_two(head);


    display_all(head);
    destroy(head);    

    return 0;
}
