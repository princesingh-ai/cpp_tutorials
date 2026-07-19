#include <iostream>

using namespace std;

int main() {
    // condition ? expriession1 : expression2;

    // int grade = 30;
    // grade >= 33 ? cout << "PASS!\n" : cout << "FAIL!\n";

    // int num = 30;
    // num %2 ? cout << "ODD\n" : cout << "EVEN\n";

    bool hungry = true;
    // hungry ? cout << "You are hungry\n" : cout << "You are full\n";
    cout << (hungry ? "You are hungry!" : "You are full!") << '\n';

    return 0;
}