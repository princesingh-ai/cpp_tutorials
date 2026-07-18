#include <iostream>

int main() {
    using std::cout;
    // arithmetic operators = return the result of a specific arithmetic operation such as (+, -, *, /)

    // int students = 20;

    // Addition operations

    // students = students + 1;
    // students+= 1;
    // students++;

    // Subtraction operations

    // students = students - 1;
    // students -= 1;
    // students--;

    // Multiplication operations

    // students = students * 2;
    // students *= 2;

    // Division operations

    // students = students / 2;
    // students /= 2;
    // sudents /= 3; using double datatype to prevent truncating

    // Remainder operation

    // int remainder = students % 2;
    // Output
    // cout << remainder << '\n';

    // Parenthesis
    // multiplication & division
    // addition & subtraction

    int sum = 5 + 1 - 2 * 7 / 8 * 9;
    int sum1 = 5 + 1 - 2 * (7 / 8) * 9;
    
    cout << sum << '\n';
    cout << sum1 << '\n';

    return 0;
}