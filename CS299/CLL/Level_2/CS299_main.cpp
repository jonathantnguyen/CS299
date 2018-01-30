#include "CS299_clist.h"
//Please place your name here
//
//
//
using namespace std;

int main()
{
    node * rear = NULL;
    build(rear);
    display_all(rear);

    //PLEASE PUT YOUR CODE HERE to call the functions
   int i = removal_entire(rear);
   cout << i << endl;



    display_all(rear); //resulting list after your function call!
    destroy(rear);
    
    return 0;
}
