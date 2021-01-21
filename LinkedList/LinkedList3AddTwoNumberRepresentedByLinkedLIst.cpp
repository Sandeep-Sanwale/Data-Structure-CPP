
#include <bits/stdc++.h>

using namespace std;

struct Node
{

    int data;

    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
} * head;

Node *insert(int size)
{
    int value;
    cin >> value;
    struct Node *head = new Node(value);
    Node *tail = head;

    for (int i = 0; i < size - 1; i++)
    {
        cin >> value;
        tail->next = new Node(value);
        tail = tail->next;
    }

    return head;
}

void printList(struct Node *temp)
{
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
}

Node *reverseList(Node *head)
{
    Node *current = head;
    Node *prev = NULL;
    Node *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

struct Node *addTwoLists(struct Node *first, struct Node *second)
{
    first = reverseList(first);
    second = reverseList(second);

    int carry = 0, sum = 0;

    Node *start = NULL;
    Node *end = NULL;

    while (first != NULL || second != NULL)
    {
        int a = (first != NULL) ? first->data : 0;
        int b = (second != NULL) ? second->data : 0;

        sum = carry + (a + b);
        carry = (sum >= 10) ? 1 : 0;
        sum = sum % 10;

        if (start == NULL)
        {
            start = new Node(sum);
            end = start;
        }
        else
        {
            end->next = new Node(sum);
            end = end->next;
        }

        if (first != NULL)
            first = first->next;

        if (second != NULL)
            second = second->next;
    }
    if (carry > 0)
        end->next = new Node(carry);

    start = reverseList(start);

    return start;
}

int main()
{

    int n, m;

    cin >> n;
    Node *first = insert(n);

    cin >> m;
    Node *second = insert(m);

    Node *res = addTwoLists(first, second);
    printList(res);

    return 0;
}