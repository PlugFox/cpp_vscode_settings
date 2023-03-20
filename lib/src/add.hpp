#ifndef ADD_H
#define ADD_H

/// Add header.
class Add {
public:
  Add();
  Add(Add &&) = default;
  Add(const Add &) = default;
  Add &operator=(Add &&) = default;
  Add &operator=(const Add &) = default;
  ~Add();

  int call(int a, int b);
};

#endif // ADD_H
