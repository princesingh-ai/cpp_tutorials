#include <iostream>

using namespace std;

int main() {
    char op;
    double num1, num2, result;

    cout << "********* CALCULATOR *********\n";

    cout << "Enter your operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter Num1: ";
    cin >> num1;

    cout << "Enter Num2: ";
    cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        cout << result << '\n';
        break;
    case '-':
        result = num1 - num2;
        cout << result << '\n';
        break;
    case '*':
        result = num1 * num2;
        cout << result << '\n';
        break;
    case '/':
        if (num2 == 0){
            cout << "Zero Division Error!\n";
            break;
        }
        result = num1 / num2;
        cout << result << '\n';
        break;
    
    default:
        cout << "Please enter a valid operator!\n";
        break;
    }


    cout << "******************************\n";

    return 0;
}