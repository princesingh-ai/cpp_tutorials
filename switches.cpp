#include <iostream>

int main() {
    using std::cout, std::cin;
    // switch = alternative to using many "else if" statements compare one value against matching cases.

    int month;
    cout << "Enter the day (1-7)";
    cin >> month;

    switch (month)
    {
    case 1:
        cout << "It's Sunday!";
        break;
    case 2:
        cout << "It's Monday!";
        break;
    case 3:
        cout << "It's Tuesday!";
        break;
    case 4:
        cout << "It's Wednesday!";
        break;
    case 5:
        cout << "It's Thursday!";
        break;
    case 6:
        cout << "It's Friday!";
        break;
    case 7:
        cout << "It's Saturday!";
        break;
    
    default:
        cout << "Please enter an integer between (1-7)";
        break;
    }


    return 0;
}