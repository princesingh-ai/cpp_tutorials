#include <iostream>

// typedef std::string text_t;
// typedef int num_t;

// It is prefered to use 'using' keyword, insted of 'typedef'

using text_t = std::string;
using num_t = int;

int main(){
    using std::cout;
    text_t name = "Prince";
    num_t age = 19;

    cout << name << '\n';
    cout << "You are " << age << "years old" << '\n';
    return 0;
}