#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};

void insert(struct node *&head, struct node *&last, int data)
{
    struct node *newnode = new node;
    newnode->data = data;

    if (head == NULL)
    {
        head = last = newnode;
        newnode->next = newnode;
        newnode->prev = newnode;
        return;
    }

    newnode->prev = last;
    newnode->next = last->next;
    last->next = newnode;
    head->prev = newnode;
    last = newnode;
}

void dispaly(struct node *head, struct node *last)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    else
    {
        struct node *temp = head;

        while (temp != last)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << temp->data << "->";
    }
}

int main()
{
    struct node *head = NULL, *last = NULL;

    insert(head, last, 5);
    insert(head, last, 10);
    insert(head, last, 15);
    insert(head, last, 20);
    dispaly(head, last);
}
