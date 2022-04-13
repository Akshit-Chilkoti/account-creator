#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    string nameLi;
    int pinLi;
    string name;
    int pin;

    cout << "Sign Up\n";
    cout << "Name: ";
    cin >> name;
    cout << "Pin: ";
    cin >> pin;

    system("cls");

    cout << "Log In: \n";
    cout << "Name: \n";
    cin >> nameLi;
    cout << "Pin: \n";
    cin >> pinLi;

    if (pin == pinLi) {
        cout << "Welceome, " << name << " to the CLI Account Creator!";
    } else {
        cout << "No Such User!";
    }
    
    return 0;
}