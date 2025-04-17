#include <iostream> //Подключение библиотек
#include <string>

int
main()
{
  std::string name = ""; // переменная имя поьзователя
  std::cin >> name;      // Ввод имени пользователя
  std::cout << "Hello world from " << name << std::end; // Вывод
}
