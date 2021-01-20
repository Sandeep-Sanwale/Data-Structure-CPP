#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};

void InsertAtbeg(struct node *&head, int data)
{
    node *last = head->prev;

    node *newnode = new node;
    newnode->data = data;

    newnode->prev = last;
    newnode->next = head;
    head->prev = newnode;
    last->next = newnode;
    head = newnode;
}

void insertAfterval(struct node *&head, int data, int value)
{
    if (head == NULL)
    {
        InsertAtbeg(head, data);
        return;
    }

    node *newnode = new node;
    newnode->data = data;

    node *temp = head;
    while (temp->data != value)
    {
        temp = temp->next;
    }
    node *next = temp->next; //pointing to the next node after value

    newnode->prev = temp;
    newnode->next = next;
    temp->next = newnode;
    next->prev = newnode;
}

void insertAtEnd(struct node *&head, int data)
{
    node *last = head->prev;

    node *newnode = new node;
    newnode->data = data;

    newnode->prev = last;
    newnode->next = head;
    last->next = newnode;
    head->prev = newnode;
    // last = newnode;  when ew nedeed last point
}

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

void deletenode(struct node *&head, int key)
{

    //if list is empty
    if (head == NULL)
        return;

    node *curr = head, *prev_1 = NULL;

    //if list is not empty then searching for key value
    while (curr->data != key)
    {
        if (curr->next == head)
        {
            cout << "key is node found in list";
            return;
        }
        prev_1 = curr;
        curr = curr->next;
    }
    //if list contains only one node and which is equal to head
    if (curr->next == head && prev_1 == NULL)
    {
        head = NULL;
        delete curr;
        return;
    }

    //if list contains more then one node and the key node is head then
    if (curr == head)
    {
        prev_1 = head->prev;

        head = head->next;
        prev_1->next = head;

        head->prev = prev_1;
        delete (curr);
    }

    //if the key node is last node then
    else if (curr->next == head)
    {
        prev_1->next = head;
        head->prev = prev_1;
        delete curr;
    }

    //if the key node is not the last node or nor the first then----
    else
    {
        node *temp = curr->next;

        prev_1->next = temp;
        temp->prev = prev_1;
        delete curr;
    }
}

void display(struct node *head, struct node *last)
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
    // display(head, last);
    InsertAtbeg(head, 1);
    insertAfterval(head, 18, 15);
    insertAtEnd(head, 25);
    deletenode(head, 15);
    deletenode(head, 25);
    display(head, head->prev);
}
