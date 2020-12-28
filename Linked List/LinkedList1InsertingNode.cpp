#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node *next;
};

void PrintList(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "  ";
        head = head->next;
    }
    cout << endl;
}

void InsertBegining(struct node *&head_ref, int new_data)
{
    node *new_node = new node;

    new_node->data = new_data;

    new_node->next = (head_ref);

    (head_ref) = new_node;
}

void InsertAfter(struct node *pre_node, int new_data)
{
    if (pre_node == NULL)
    {
        cout << " previous node cant be Null";
        return;
    }
    node *new_node = new node;

    new_node->data = new_data;

    new_node->next = pre_node->next;

    pre_node->next = new_node;
}

void InsertEnd(struct node *&head_ref, int new_data)
{
    node *new_node = new node;

    struct node *last = head_ref;

    new_node->data = new_data;
    new_node->next = NULL;

    if (head_ref == NULL)
    {
        head_ref = new_node;
        return;
    }

    while (last->next != NULL)
    {
        last = last->next;
    }

    last->next = new_node;
    return;
}

int main()
{
    struct node *head = NULL;
    struct node *third = NULL;
    struct node *second = NULL;

    head = new node;
    second = new node;
    third = new node;

    head->data = 5;
    head->next = second;

    second->data = 10;
    second->next = third;

    third->data = 15;
    third->next = NULL;

    PrintList(head);
    InsertBegining(head, 1);
    PrintList(head);
    InsertAfter(second, 20);
    PrintList(head);
    InsertEnd(head, 25);
    PrintList(head);
}
