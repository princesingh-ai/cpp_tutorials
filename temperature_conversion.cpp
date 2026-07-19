#include <iostream>

using namespace std;

int main() {
    double temp;
    char unit;

    cout << "F = Fahrenheit" << '\n' << "C = Celsius\n";
    cout << "What would you like to convert to?: \n";
    cin >> unit;

    if (unit == 'F' || unit == 'f'){
        cout << "Enter the temperature in Celsius: ";
        cin >> temp;

        temp = (1.8 * temp) + 32.0;
        cout << "Temperature in Fahrenheit: " << temp << '\n';
    }
    else if (unit == 'C' || unit == 'c'){
        cout << "Enter the temperature in Fahrenheit: ";
        cin >> temp;

        temp = (temp - 32 / 1.8);
        cout << "Temperature in Celsius: " << temp << '\n';
    }
    else{
        cout << "Please enter in C or F only.";
    }

    return 0;
}