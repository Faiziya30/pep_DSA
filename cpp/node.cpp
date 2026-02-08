#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

int countEven(Node *&head)
{
    Node *temp = head;
    int cnt = 0;
    while (temp)
    {
        if (temp->data % 2 == 0)
            cnt++;
        temp = temp->next;
    }

    return cnt;
}

void insertBeginning(Node *&head, int val)
{
    if (!head)
    {
        head = new Node(val);
        return;
    }
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insertAtPosition(Node *&head, int val, int pos)
{
    Node *newNode = new Node(val);
    if (pos == 0)
    {
        newNode->next = head;
        head = newNode;
        return;
    }
    Node *temp = head;

    while (pos--)
    {
        if (temp == NULL)
            break;
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return;
}

bool checkElement(Node *head)
{
    if (!head)
        return false;

    if (head->data == 2)
        return true;

    return checkElement(head->next);
}

int main()
{
    Node *node = new Node(10);
    insertBeginning(node, 4);
    insertBeginning(node, 2);
    insertBeginning(node, 3);
    // print(node);

    // int el, pos;
    // cin >> el >> pos;

    // insertAtPosition(node, el, pos);
    // print(node);

    bool ans1 = checkElement(node);
    cout << ans1;

    // int ans = countEven(node);
    // return ans;
}