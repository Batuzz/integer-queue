#include <iostream>
#include "Queue.hpp"

int main(int argc, const char * argv[]) {
    
    Queue* queue = new Queue();
    
    std::cout << "Enqueuing numbers 5, 11, 55, 2 and printing them" << std::endl;
    
    queue->enqueue(5);
    queue->enqueue(11);
    queue->enqueue(55);
    queue->enqueue(2);
    
    queue->print();
    
    std::cout << "Dequeuing 3 queue's elements and printing the rest of them" << std::endl;
    
    queue->dequeue();
    queue->dequeue();
    queue->dequeue();
    
    queue->print();
    
    return 0;
}
