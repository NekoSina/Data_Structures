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
    index = sizeof(Arr)/sizeof(Arr[0]) - 1;
    Print();
}
void Queue::Enqueue(int data){
    std::cout<<"Enqueue() started for member "<<data<<" with index "<<index<<std::endl;
    if (index < size){
        Arr[index] = data;
        std::cout<<"Arr["<<index<<"] = "<<data<<std::endl;
        index++;
    }
    else
    {
        std::cerr<<"lets resize array AND add the last number to queue"<<std::endl;
        int* copy = new int[size];
        for (size_t i = 0; i < size; i++)
        {
            copy[i] = Arr[i];
        }
        Arr = new int[size*2];
        for (size_t i = 0; i < size*2; i++)
        {   
            if(i < size){
                Arr[i] = copy[i];
            }
            else{
                Arr[i] = 0;
            }
        }
        size = size *2;
        Arr[index] = data;
        index ++; 
    }
    Print();
}
int Queue::DeQueue(){
    std::cout<<"DeQueue started\n";
    return front;
}
void Queue::Queue_roll(){
    for(int n = size-1; n >= 0; n --){
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