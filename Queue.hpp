#include "ListElement.hpp"

class Queue {
public:
    void print();
    void enqueue(int number);
    void dequeue();
private:
    ListElement* first_element;
    ListElement* last_element;
};
