#include "Queue.h"
Queue my_queue(5);
int main(){
    int input;
    for(int i = 0; i<20 ; i++){
        std::cout<<"enter stuff"<<std::endl;
        std::cin>>input;
        my_queue.Enqueue(input);
    }

    std::cin.get();
    return 0;
}