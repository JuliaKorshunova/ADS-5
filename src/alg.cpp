// Copyright 2021 NNTU-CS
#include <string>
#include <map>
#include "tstack.h"
int getPriority(char operation) {
  switch (operation) {
    case ('('): 
      return 0;
      break;
    case (')'): 
      return 1;
      break;
    case ('+'): 
      return 2;
      break;
    case ('-'): 
      return 2;
      break;
    case ('*'): 
      return 3;
      break;
    case ('/'): 
      return 3;
      break;
    default: 
      return -1;
      break;
  }
}
std::string infx2pstfx(std::string inf) {
  TStack <char, 100> stack11;
    std::string works;
    for (char a : inf) {
        int priority = getPriority(a);
        if (isdigit(a)) {
            works += a;
            works += ' ';
        } else if (!priority || stack1.isEmpty()) {
            stack11.push(a);
        } else if (priority == 1) {
            while (getPriority(stack11.get())) {
                works += stack11.pop();
                works += ' ';
            }
            stack11.top_delete();
        } else if (priority > getPriority(stack11.get())) {
            stack11.push(a);
        } else if (priority <= getPriority(stack11.get())) {
            while (!stack11.isEmpty() && getPriority(stack11.get()) >= priority) {
                works += stack11.pop();
                works += ' ';
            }
            stack11.push(a);
        }
    }
    while (!stack11.isEmpty()) {
        works += stack11.pop();
        if (!stack11.isEmpty())
        works += ' ';
    }
    return std::string(works);
}
int vshislenia(char op, int x, int y) {
  switch (op) {
  case ('/'): 
      return x / y;
      break;
  case ('*'): 
      return x * y;
      break;
  case ('-'): 
      return x - y;
      break;
  case ('+'): 
      return x + y;
      break;
  }
  return 0;
}
int eval(std::string post) {
  TStack<int, 100> stack12;
  std::string rezult = '';
  for (int j = 0; j < post.size(); j++) {
    if (getPriority(pref[j]) == -1) {
      if (pref[j] == ' ') {
        continue;
      } else if (isdigit(post[j + 1])) {
        rezult += post[j];
        continue;
      } else {
        rezult += post[j];
        stack12.push(atoi(rezult.c_str()));
        rezult = "";
      }
    } else {
      int y = stack12.get();
      stack12.pop();
      int x = stack.get();
      stack12.pop();
      stack12.push(count(x, y, post[j]));
    }
  }
  return stack12.get();
}
