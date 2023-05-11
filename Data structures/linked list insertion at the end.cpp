/*linked list insertion at the end */
void insertatend(int value)
{
    node *newnode = new node();
    struct node *temp = head;
    newnode -> data = value;
    newnode -> next = NULL;
    while(temp -> next!=NULL)
    {
        temp=temp->next;
    }
    
}