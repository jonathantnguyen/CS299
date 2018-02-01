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

	int i =remove_larger(head);
	cout << "Number of items deleted: " << i << endl;
	
    display_all(head);
    destroy(head);    
    return 0;
}
