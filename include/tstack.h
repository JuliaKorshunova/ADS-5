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
    void push(const type& value) {
      if (top >= size) {
        throw std::string("Full!");
      } else {
        arr[++top] = value;
      }
    }
    type pop() {
      if (top == -1) {
        throw std::string("Empty!");
      } else {
        return arr[top--];
      }
    }
    type get() const {
      if (top == -1) {
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
};
#endif  // INCLUDE_TSTACK_H_
