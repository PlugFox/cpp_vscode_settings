#include <iostream>
using namespace std;

int main(int argc, char **argv) {
  std::cout << "Arguments:" << std::endl;
  for (int i = 0; i < argc; i++)
    cout << "argv[" << i << "] = " << argv[i] << endl;
  std::cout << "Hello World!" << std::endl;

  // system("pause");
  return 0;
}