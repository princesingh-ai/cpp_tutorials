#include <iostream>

int main(){
    using std::cout, std::cin;
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 65){
        cout <<"You are too old to visit this site.";
    }
    else if (age >=18){
        cout <<"You are welcome!";
    }
    else if (age < 0){
        cout << "You haven't been born yet!";
    }
    else if (age < 18){
        cout << "You are too young to visit this site.";
    }
    else {
        cout << "The input must be an integer.";
    }
    return 0;
}