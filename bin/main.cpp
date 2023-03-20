#include <iostream>
#include "../lib/src/add.cpp"

using namespace std;

int main(int argc, char **argv) {
  std::cout << "Arguments:" << std::endl;

  for (int i = 0; i < argc; i++)
    cout << "argv[" << i << "] = " << argv[i] << endl;
  std::cout << "Hello World!" << std::endl;

  Add *add = new Add();
  int a, b;
  std::cout << "a = ";
  std::cin >> a;
  std::cout << "b = ";
  std::cin >> b;
  std::cout << "a + b = " << add->call(a, b) << endl;
  delete add;

  // system("pause");
  return 0;
}