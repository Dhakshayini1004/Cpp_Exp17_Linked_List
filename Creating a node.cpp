/*
Name : Dhakshayini Usha R
PRN : 24070123039
ENTC A2
*/
#include <iostream>
using namespace std;

class Node{
    public : 
    int val;
    Node *next;

    // Constructor to initialize node

    Node(int data){
        val = data;
        next = NULL;
    }

};


int main(){
    Node*n = new Node(20);
    // Syntax of linked list 
    cout<<n->val<<" "<<n->next<<endl;
    return 0;
}

/*
Sample Output: 
20 0
*/
