#include"Queue.h"

Queue::Queue(){
    std::cout<<"lets make Queue size and print it onto screen!\n";

}
Queue::Queue(int n){
    size = n;
    Arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        Arr[i] = 0;
    }
    index = sizeof(Arr)/sizeof(Arr[0]);
    Print();
}
void Queue::Enqueue(int data){
    std::cout<<"Enqueue() started for member "<<data<<" with index "<<index<<std::endl;
    if (index < size){
        Arr[size - index] = data;
        index++;
    }
    else
    {
        Resize();
        Arr[index] = data;
        index ++; 
        
    }
    Print();
}
int Queue::DeQueue(){
    return Arr[size-1];
}
void Queue::Print(){
    for (int i = 0; i < size; i++)
    {   
        if(i != size - 1){
            std::cout<<Arr[i]<<",";
        }
        else{
            std::cout<<Arr[i]<<std::endl;
        }
    }
    
}
void Queue::Resize(){
        int* copy = new int[size];
        for (size_t i = 0; i < size; i++)
        {
            copy[i] = Arr[i];
        }
        Arr = new int[size*2];
        int _size = size *2;
        for (_size; _size >= 0; _size --)
        {   
            if(_size >= size){
                Arr[_size] = copy[_size - size];
            }
            else
            {
                Arr[_size] = 0;
            }
        }    
        size = size *2;
}