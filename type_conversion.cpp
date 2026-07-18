#include <iostream>

int main(){
    using std::cout;
    // type conversion = conversion a value of one data type to another.
    //                   Implicit = automatic
    //                   Explicit = Precede value with new data type (int, double, bool, char)

    int x = (double) 3.14;
    double y = (int) 4.22;

    cout << x << '\n';
    cout << y << '\n';


    int correct = 7;
    int questions = 29;
    double score = correct/(double)questions * 100;

    cout << score << "%" << '\n';

    return 0;
}