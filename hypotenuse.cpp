# include <iostream>
# include <cmath>

int main(){
    using std::cout, std::cin;

    double a;
    double b;
    double c;

    cout << "Enter side a of the triangle: ";
    cin >> a;

    cout << "Enter side b of the triangle: ";
    cin >> b;

    c = ceil(sqrt(pow(a, 2) + pow(b, 2)));

    cout << "Hypotenuse: " << c << '\n';


    return 0;
}