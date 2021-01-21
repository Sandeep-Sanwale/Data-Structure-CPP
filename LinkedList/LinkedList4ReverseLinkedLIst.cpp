#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node *next;
};

//Reversing through Iteration

node *Reverse(node *&head)
{
    node *prvptr = NULL;
    node *currptr = head;
    node *nxtptr;

    while (currptr != NULL)
    {
        nxtptr = currptr->next;
        currptr->next = prvptr;

        prvptr = currptr;
        currptr = nxtptr;
    }
    return prvptr;
}

//Reversing a Linked List Through Recursion

node *ReverseRecursive(node *&head)
{
    if (head == NULL || head->next == NULL)
        return head;

    node *newhead = ReverseRecursive(head->next);

    head->next->next = head;
    head->next = NULL;

    return newhead;
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

    head = new node;
    second = new node;
    third = new node;

    head->data = 5;
    head->next = second;

    second->data = 10;
    second->next = third;

    third->data = 15;
    third->next = NULL;

    //   From both way we can reverse our Linked List

    // node *rtnhead = Reverse(head);  //Iterative way

    node *newhead = Reverse(head); //Recursive way

    PrintList(newhead);
}