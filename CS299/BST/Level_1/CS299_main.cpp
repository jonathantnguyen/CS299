#include "CS299_bst.h"

int main()
{
    node * root = NULL;
    build(root);
    display_all(root);

    /*  PLACE YOUR FUNCTION CALL HERE */
    int count;
    int sum;

    //count = count_greater_than(root);
    //cout << "Number of nodes with data greater than the root's data: " << count << endl;
    sum = add_all_leafs(root);
    cout << "The sum of every leaf's data: " << sum << endl;

    display_all(root);


    destroy(root);
    return 0;
}
