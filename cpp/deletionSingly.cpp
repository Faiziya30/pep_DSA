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

void deleteBeginning(Node *head)
{
    Node *temp = head;
    head = head->next;
    delete temp;
}

void deleteEnd(Node *head, int val)
{
    if (head == NULL)
        return;
    if (head->data == val && head->next == NULL)
    {
        delete head;
        head = NULL;
        return;
    }
    Node *temp = head;
    Node *prev = NULL;
    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    delete temp;
}

int main()
{
    Node *head = new Node(10);
    Node *node = new Node(20);
    Node *node2 = new Node(30);
    Node *node3 = new Node(40);
    Node *node4 = new Node(50);
    head->next = node;
    node->next = node2;
    node2->next = node3;
    node3->next = node4;
    deleteEnd(head, 50);
}