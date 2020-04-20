#include "stack.h"

template <typename T>
Stack<T>::Stack(){}



template <typename  T>
Stack<T> & Stack<T>::operator=(const T& elem){
    for (int i = 0; i < elem.size(); ++i) {
        elements.push_back(elem[i]);
    }
    return *this;
}

template <typename T>
Stack<T>::Stack(const T &elem) {
    for(int i=0; i<elem.size(); i++){
        elements.push_back(elem[i]);
    }
}

template <typename T>
void  Stack<T>::pop(){
    elements.pop_back();
}

template <typename T>
void Stack<T>::push(T const& elem){
    elements.push_back(elem);
}



template <typename T>
bool Stack<T>::empty(){
    return elements.empty();
}

template <typename T>
T const& Stack<T>::top() const{
    return elements.front();
}

template <typename T>
void Stack<T>::print_elements(ostream& os){
    for (int i = 0; i < elements.size(); ++i) {
        os<< elements[i]<<" ";
    }
}

template <typename U>
ostream& operator<<(ostream& os, Stack<U> const& elem){
    for (int i = 0; i < elem.elements.size(); ++i) {
        os<< elem.elements[i]<<endl;
    }
    return os;
}

template <typename T>
bool Stack<T>::operator==(const T& elem){
    for (int i = 0; i < elem.size(); ++i) {
        if (elem.elements[i]!=this->elements[i])
            return false;
    }
    return true;
}