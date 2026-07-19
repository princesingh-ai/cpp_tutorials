#include <iostream>

using namespace std;

// .length()
// .empty() -> returns bool true/false
// .clear()
// .append()
// .at()
// .find()
// .insert()

int main() {
    string name;
    
    cout << "Enter your name: ";
    getline(cin, name);

    if(name.length() > 12){
        cout << "Your name can't be over 12 characters!";
    }
    else{
        cout << "Welcome " << name << '\n';
    }


    if(name.empty()){
        cout << "Your didn't enter your name!\n";
    }
    else{
        cout << "Hello " << name << '\n';
    }

    name.clear();
    cout << "Hello " << name << '\n';

    name.append("@gmail.com");
    cout << "Your username is now: " << name << '\n';

    cout << name.at(0) << '\n';

    name.insert(0, "@");
    cout << "Hello " << name << '\n';

    cout << name.find(' ') << '\n';

    name.erase(0, 6);
    cout << "Hello " << name << '\n';
    
    return 0;
}