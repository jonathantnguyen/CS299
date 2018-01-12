//list.h
#include <iostream>
#include <cctype>
#include <cstdlib>
using namespace std;


//The data structure is a linear linked list of integers
struct node
{
    int data;
    node * next;
};


//These functions are already written and used by main
void build(node * & head);    

void display_all(node * head);

void destroy(node * &head);

/* *****************YOUR TURN! ******************************** */
/* PLACE YOUR PROTOTYPE HERE */

int display_allButFirst(node * head);
int dataGTLastNode(node * head);
bool find_last_two(node * head);




