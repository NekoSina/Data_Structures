#include<iostream>

class Queue{
    private:
    int *Arr;
    int _size;
    int index;
    int front;
    public:
    Queue();
    Queue(int n);
    void Enqueue(int data);
    void Queue_roll();
    int DeQueue();
    void Print();
};