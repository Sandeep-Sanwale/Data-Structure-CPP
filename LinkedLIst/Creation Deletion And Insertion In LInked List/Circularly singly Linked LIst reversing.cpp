#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node *next;
};

void insertnode(struct node *&last, int data)
{
    struct node *newnode = new node;

    newnode->data = data;

    if (last == NULL)
    {
        last = newnode;
        last->next = newnode;
    }

    else
    {
        // last->next = newnode;
        // last = newnode;
        // last->next = head;
        newnode->next = last->next;
        last->next = newnode;
        last = newnode;
    }
}

void display(struct node *last)
{
    if (last == NULL)
    {
        cout << "List is Empty";
    }

    else
    {
        struct node *temp = last->next;
        //we also use do while loop

        while (temp != last)
        {
            cout << temp->data << "  ";
            temp = temp->next;
        }

        cout << temp->data << endl;
        //for last element

        // do
        // {
        //     cout << temp->data << "  ";
        //     temp = temp->next;
        // } while (temp != head);
    }
}

void Reversed(struct node *&last)
{

    // struct node *temp = last->next;
    if (last == NULL)
    {
        return;
    }
    struct node *prev;
    struct node *curr = last->next;
    struct node *next = curr->next;

    while (curr != last)
    {
        prev = curr;
        curr = next;
        next = curr->next;

        curr->next = prev;
    }
    next->next = last;
    last = next;
}

int main()
{
    struct node *last = NULL;

    insertnode(last, 5);
    insertnode(last, 10);
    insertnode(last, 15);
    insertnode(last, 20);
    insertnode(last, 25);
    Reversed(last);
    display(last);
}
