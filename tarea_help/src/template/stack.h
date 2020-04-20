//
// Author: marvin on 4/19/20.
//

#ifndef STACK_H
#define STACK_H

#include "../lib.h"

template <typename T>
class Stack {
private:
    vector<T> elements;

public:
    Stack();
    Stack& operator=(const T& elem);
    Stack(const T&);
    void push(T const& elem);
    void pop();
    T const& top() const;
    bool empty();
    bool operator==(const T& elem);
    void print_elements(ostream& os);
    template <typename U>
    friend ostream& operator<<(ostream& os, Stack<U> const& elem);
};

#endif //STACK_H
