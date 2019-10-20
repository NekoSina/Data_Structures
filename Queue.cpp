#include"Queue.h"

Queue::Queue(){
    std::cout<<"lets make Queue size and print it onto screen!\n";

}
Queue::Queue(int n){
    _size = n;
    Arr = new int[_size];
    for (int i = 0; i < _size; i++)
    {
        Arr[i] = 0;
    }
    index = sizeof(Arr)/sizeof(Arr[0]) - 1;
    Print();
}
void Queue::Enqueue(int data){
    std::cout<<"Enqueue() started for member "<<data<<" with index "<<index<<std::endl;
    if (index < _size){
        Arr[index] = data;
        std::cout<<"Arr["<<index<<"] = "<<data<<std::endl;
        index++;
    }
    else
    {
        std::cerr<<"arr is full"<<std::endl;
    }
    Print();
}
int Queue::DeQueue(){
    std::cout<<"DeQueue started\n";
    return front;
}
void Queue::Queue_roll(){
    for(int n = _size-1; n >= 0; n --){
        if(n == n -1){
            front = Arr[n];
            std::cout<<"front is now "<<front<<std::endl;
        }
        else{
            Arr[n + 1]= Arr[n];
            if(n == 0){
                Arr[n] = 0;
            }
        }
    }
    index = 0;
    Print();
}
void Queue::Print(){
    for (int i = 0; i < _size; i++)
    {   
        if(i != _size - 1){
            std::cout<<Arr[i]<<",";
        }
        else{
            std::cout<<Arr[i]<<std::endl;
        }
    }
    
}