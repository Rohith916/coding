#include <iostream>
using namespace std;
struct Node {
      Node *left;
      int  data;
      Node *right;
};

Node *root = NULL;
void createnode(int d);
{
    newnode = NULL;
    newnode -> left =NULL;
    newnode -> data = d;
    newnode -> right=NULL;
}
void insert()
{
    if(root==NULL)
    {
        root = newnode;
    }
    else 
    {
        Node *temp1= root;
        Node *temp2= NULL;
        while(true)
        {
            temp2==temp1;
            if(d<temp2->data)
            {
                temp1 = temp1 -> left;
                if(temp1==NULL)
                {
                    temp2-> left = new node;
                    break;
                }
            }
        }

    }
}