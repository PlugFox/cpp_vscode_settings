#ifndef MY_CLASS_H
#define MY_CLASS_H

#include <iostream>
using namespace std;

/// MyClass header.
class MyClass {
public:
  MyClass();
  MyClass(MyClass &&) = default;
  MyClass(const MyClass &) = default;
  MyClass &operator=(MyClass &&) = default;
  MyClass &operator=(const MyClass &) = default;
  ~MyClass();
};

#endif // MY_CLASS_H

MyClass::MyClass() {}

MyClass::~MyClass() {}