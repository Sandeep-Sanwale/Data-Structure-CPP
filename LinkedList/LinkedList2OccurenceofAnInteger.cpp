
#include <bits/stdc++.h>

using namespace std;

struct node
{

    int data;

    node *next;

    node(int x)
    {
        data = x;
        next = NULL;
    }
} * head;

int count(struct node *head, int search_for)
{
    //add your code here

    node *temp = head;
    int count = 0;

    while (temp != NULL)
    {
        if (temp->data == search_for)
            count++;

        temp = temp->next;
    }

    return count;
}

void insert()
{
    int n, i, value;
    struct node *temp;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> value;

        if (i == 0)
        {
            head = new node(value);
            head->data = value;
            head->next = NULL;
            temp = head;
            continue;
        }
        else
        {
            temp->next = new node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

void printList(struct node *temp)
{
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
}

int main()
{
    int n, k, occ;

    insert();

    cin >> k;

    occ = count(head, k);

    cout << occ;

    return 0;
}