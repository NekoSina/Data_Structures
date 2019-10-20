#include "Queue.h"
Queue my_queue(5);
int main(){
    my_queue.Enqueue(9);
    my_queue.Enqueue(12);
    my_queue.Enqueue(123);
    my_queue.Enqueue(13);
    my_queue.Enqueue(165);
    my_queue.Enqueue(165);
    my_queue.Queue_roll();
    int QueueReturn = my_queue.DeQueue();
    std::cout<<"QueueReturn = "<< QueueReturn<<std::endl;
    my_queue.Enqueue(3232);
    std::cin.get();
    return 0;
}