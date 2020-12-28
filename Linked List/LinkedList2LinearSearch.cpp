#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node *next;
};

bool LinearSearch(node *head, int key)
{
    node *temp = head;

    while (temp != NULL)
    {
        if (temp->data == key)
            return true;

        temp = temp->next;
    }
    return false;
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

    cout << LinearSearch(head, 11);
}