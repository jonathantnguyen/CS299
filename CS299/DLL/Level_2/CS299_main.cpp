#include "CS299_dlist.h"
//Please place your name here
//
//
using namespace std;

int main()
{
    node * head = NULL;
    build(head);
    display_all(head);

    //PLEASE PUT YOUR CODE HERE to call the functions
    int i =swap_last_2(head);
    cout << "sum of last 2 nodes swapped: " << i << endl;

    display_all(head);
    destroy(head);    
    return 0;
}
