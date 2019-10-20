#include<iostream>

class Queue{
    private:
    int *Arr;
    int size;
    int index;
    int front;
    void Resize();
    public:
    Queue();
    Queue(int n);
    void Enqueue(int data);
    int DeQueue();
    void Print();
};