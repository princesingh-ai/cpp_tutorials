# include <iostream>
# include <cmath>

int main() {
    using std::cout;

    double x = 4.99;
    double y = 9;
    double z;

    // z = std::min(x, y);
    // z = std::max(x, y);

    // z = pow(2, 4);

    // z = sqrt(9);

    // z = abs(-2); 
    // z = round(x);
    // z = ceil(x);
    z = floor(x);
    cout << z << '\n';

    return 0;
}