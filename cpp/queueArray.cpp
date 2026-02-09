#include <bits/stdc++.h>
using namespace std;

class MyQueue
{
public:
    int *arr;
    int front;
    int rear;
    int size;

    MyQueue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = rear = -1;
    }

    void enqueue(int val)
    {
        if (rear == size - 1)
        {
            cout << "Queue Overflow" << endl;
            return;
        }
        rear++;
        arr[rear] = val;
        if (front == -1)
            front = 0;
    }

    void dequeue()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue Underflow" << endl;
            return;
        }
        front++;
    }

    // get the front element
    int getFront()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }
};

int main()
{
    MyQueue q(5);
    return 0;
}