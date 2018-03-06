#include "CS299_bst.h"

int main()
{
    node * root = NULL;
    build(root);
    display_all(root);

    /*  PLACE YOUR FUNCTION CALL HERE */
    //int count;
    //int sum;
    //int height;
    int value;

    //count = count_greater_than(root);
    //cout << "Number of nodes with data greater than the root's data: " << count << endl;
    //sum = add_all_leafs(root);
    //cout << "The sum of every leaf's data: " << sum << endl;

    height = height_of_tree(root);
    cout << "Height of the BST: " << height << endl;

    value = find_successor(root);
    cout << "Root's inorder successor: " << value <<endl;


    display_all(root);


    destroy(root);
    return 0;
}
