#include <iostream>
#include <string>

int main() {
    using std::cout, std::cin, std::getline, std::ws;

    std::string name;
    int age;
    
    cout << "what is your age?: ";
    cin >> age;

    cout << "What is your full name?: ";
    getline(cin >> ws, name);

    cout << "Hello " << name << "👋🏾" << '\n';
    cout << "You are " << age << "years old." << '\n';

    return 0;
}