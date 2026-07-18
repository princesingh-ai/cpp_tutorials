#include <iostream>

int main(){
    
    int x; //declaration
    x = 5; //assignment
    int y = 44; // combined
    int sum = x + y;

    std::cout << y << std::endl;
    std::cout << x << std::endl;
    std::cout << sum << '\n';


    // the int data type stores an integer (whole number)

    int age = 20;
    int year = 2006;
    int days = 16;

    // if days is in decimal
    int decidays = 16.7;

    // Number including decimal
    double price = 30.37;
    double cgpa = 7.04;
    double temperature = 25.1;


    // single character can only store a single character.
    char grade = 'A';
    char currency = '$';

    // boolean (true or false) (output 0/1 0 for false and 1 for true)
    bool student = true;

    // strings
    std::string name = "Prince";


    std::cout << decidays;
    std::cout << price;
    std::cout << currency;
    std::cout << student << '\n';
    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << "years old" << '\n';


    return 0;
}