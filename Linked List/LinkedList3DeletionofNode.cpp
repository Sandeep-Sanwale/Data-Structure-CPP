#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node *next;
};

//Deleting first Occurence of given data value

void deletenode(struct node *&head, int key)
{
    struct node *temp = head;
    node *prev;

    //if head itself has given key->
    if (temp != NULL && temp->data == key)
    {
        head = temp->next;
        delete temp;
        return;
    }
    //if key is persent after head->
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    //If key is not present in linked list->
    if (temp == NULL)
        return;

    prev->next = temp->next;

    delete temp;
}

//Deleting node when the position of that node is given

void deletenodepos(struct node *&head, int pos)
{

    if (head == NULL)
        return;

    struct node *temp = head;

    if (pos == 0)
    {
        head = temp->next;
        delete temp;
        return;
    }

    for (int i = 0; temp != NULL && i < pos - 1; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL)
        return;

    node *next = temp->next->next;

    delete (temp->next);

    temp->next = next;
}

//Deleting node when given is the pointer which is pinting to deleted node  ,It fails when the deleting node is last node

void deleteviaptr(struct node *&second)
{
    node *temp = second->next;

    second->data = temp->data;

    second->next = temp->next;

    delete temp;
}
void PrintList(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "  ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    struct node *head = NULL;
    struct node *third = NULL;
    struct node *second = NULL;
    struct node *fourth = NULL;

    head = new node;
    second = new node;
    third = new node;
    fourth = new node;

    head->data = 5;
    head->next = second;

    second->data = 10;
    second->next = third;

    third->data = 15;
    third->next = fourth;

    fourth->data = 20;
    fourth->next = NULL;

    //    deletenode(head, 5);
    //    PrintList(head);
    //    deletenodepos(head, 1);
    //    PrintList(head);
    deleteviaptr(third);
    PrintList(head);
}