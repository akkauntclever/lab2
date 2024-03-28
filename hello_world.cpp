#include <iostream>
#include <string>

using namespace std;

int main() {
  cout << "Enter your username:" << std::endl;
  string username;
  getline(std::cin, username);
  cout << "Hello, world from " << username << std::endl;
  return 0;
}
