// Copyright 2021 NNTU-CS
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_
#include <string>
template<typename type, int size>
class TStack {
 private:
    type arr[100];
    int top;

 public:
    TStack() :top(-1) {}
    void push(type value) {
      if (isFull()) {
        throw std::string("Full!");
      } else {
        arr[++top] = value;
      }
    }
    const type& pop() {
      if (isEmpty()) {
        throw std::string("Empty!");
      } else {
        return arr[top--];
      }
    }
    const type& get()const {
      if (isEmpty()) {
        throw std::string("Empty!");
      } else {
        return arr[top];
      }
    }
    bool isEmpty()const {
      return top == -1;
    }
    bool isFull()const {
      return top == size - 1;
    }
    void topDelete() {
        if (!isEmpty())
            --top;
        else
            throw std::string("Empty(=)!");
    }
};
#endif  // INCLUDE_TSTACK_H_
