#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <c.math>

using namespace std;

struct node
{
    int data;
    node * left;
    node * right;
};

void build(node * & root);   //supplied
void display_all(node *  root);  //supplied
void destroy(node * & root); //supplied
/* ************** PLACE YOUR PROTOTYPE HERE ***************** */
 
int count_greater_than(node * & root);
int add_all_leafs(node * & root);
int height_of_tree(node * & root);

