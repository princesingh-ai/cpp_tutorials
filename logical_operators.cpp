#include <iostream>

using namespace std;

int main() {
    
    // && = check if the conditions are true
    // || = check if at least one of two conditions is true
    // ! = reverses the logical state of its operand

    int temp;

    cout << "Enter the temperature in celcius:";
    cin >> temp;

    // if (temp > 0 && temp < 30){
    //     cout << "The temperature is good!\n";
    // }
    // else {
    //     cout << "The temperature is bad!\n";
    // }

    // if (temp <= 0 || temp >= 30){
    //     cout << "The temperature is bad!\n";
    // }
    // else {
    //     cout << "The temperature is good!\n";
    // }

    bool sunny = true;

    if (!sunny) {
        cout << "It is cloudy outside!\n";
    }
    else{
        cout << "It is Sunny outside!\n";
    }

    return 0;
}