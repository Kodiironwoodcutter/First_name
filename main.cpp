#include <QCoreApplication>
#include <string>
#include <iostream>
#include <stdlib.h>

int main()
{
    //Глава 3
    //Начальная стадия

 // std:: cout << "Пожалуйста, введите свое имя(затем нажмите 'enter'):\n";
  // std::string first_name;
 // std:: cin >> first_name;
 // std:: cout << "Hello, " << first_name << "!\n";

    //Дополненный код

   // std:: cout <<"Пожалуйста, введите свое имя и возраст (затем нажмите 'enter'):\n";
   // std:: string first_name;
   // int age;
   // std:: cin >> first_name >> age;
   // std:: cout << "hello, " <<first_name<< "(age" << age <<")\n";
   // return 0;

//  Глава 3.3 Рубрика "Попробуйте"
    char probel[] = " ";
    std:: cout <<"Пожалуйста, введите свое имя и возраст (затем нажмите 'enter'):\n";
    std:: string first_name;
    double age;
    std:: cin >> first_name  >> age;
   // std:: cout << "hello, " <<first_name << "(<< age*12 <<" " << "month" <<")\n";
    std:: cout << "hello, " <<first_name << probel << age*12 << "month" "\n";
    return 0;
    // Не понимаю что не так с отображением русскоязычного текста ????? уже час ночи, завтра продолжу.
    // Уже 2 часа ночи , только разобрался с выводом пробела жопа (_|_)

}
