#include "Queue.hpp"
#include <iostream>

void Queue::print() {
    ListElement* tmp_element = this->first_element;
    while(tmp_element) {
        std::cout << tmp_element->value << std::endl;
        tmp_element = tmp_element->get_next_element();
    }
}

void Queue::enqueue(int number) {
    ListElement* new_element = new ListElement(number);
    if (!this->first_element) {
        this->first_element = new_element;
        this->last_element = new_element;
    } else {
        this->last_element->set_next_element(new_element);
        this->last_element = new_element;
    }
}

void Queue::dequeue() {
    this->first_element = this->first_element->get_next_element();
}
