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
    int count = display_all_but_last(head);
    cout << "Number of nodes displayed: " << count << endl;

    

    display_all(head);
    destroy(head);
    
    return 0;
}
