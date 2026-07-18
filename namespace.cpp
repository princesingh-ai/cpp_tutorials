#include <iostream>

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main() {

    //int x = 0;
    //std::cout << x << '\n';

    using namespace first;
    std::cout << x << '\n';
    std::cout << second::x << '\n';

    return 0;
}