#include "CS299_arr.h"
//Please place your name here:
//
//
using namespace std;

int main()
{
    node * head[SIZE] = {0,0,0,0,0};
    build(head);
    display_all(head);

    //PLEASE PUT YOUR CODE HERE to call the functions


    //int count = find_longest(head);
    //cout << "Largest Length is: "<< count << endl;

   	int count  = remove_last(head);
   	cout << "NUmber of items removed: " << count << endl;

    
    display_all(head);
    destroy(head);
    
    return 0;
}
