#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }

int main(int argc, char **argv) {
  std::cout << "Arguments:" << std::endl;
  for (int i = 0; i < argc; i++)
    cout << "argv[" << i << "] = " << argv[i] << endl;
  std::cout << "Hello World!" << std::endl;

  int a = 1, b = 2;
  cout << "a + b = " << add(a, b) << endl;

  // system("pause");
  return 0;
}