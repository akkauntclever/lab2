#include <iostream>
#include <string>

int main() {
  std::cout << "Enter your username:" << std::endl;  //  Вывод информации о необходимости получить username
  std::string username;
  std::getline(std::cin, username);  //  получение username
  std::cout << "Hello, world from " << username << std::endl;  //  вывод username
  return 0;
}

