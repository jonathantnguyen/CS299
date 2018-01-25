#include "CS299_clist.h"
//Your name: Jonathan Nguyen
//
//

using namespace std;

int main()
{
    node * rear = NULL;
    node * new_rear = NULL;
    node * source_rear = NULL;
    build(rear);
    display_all(rear);

  
    //int total = display_except(rear);
    //cout <<total << endl;


    //if(remove_last(rear))
    //	cout << "true"<< endl;

    int count = copy_all(new_rear, source_rear);
    cout << count << endl;
    
    display_all(rear); //resulting list after your function call!
    destroy(rear);
   
    return 0;
}
