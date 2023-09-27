#include <iostream>
#include <string>

using namespace std;

void Check_cin_number (int &Num) {
    cin >> Num;
    if (Num <= 10000 && Num >= -10000)
        return;
    cout << "The number you input must fall within the range of [-10^4; 10^4].";
    exit(0);
}

int main () {
    int x, y;
    cout << "Enter the first integer or decimal number: ";
    Check_cin_number(x);
    cout << "Enter the second integer or decimal number: ";
    Check_cin_number(y);
    cout << "Enter the operation you want to perform (+, -, *, /): ";
    char c;
    cin >> c;
    if (c != '+' && c != '-' && c != '/' && c != '*') {
        cout << "The program can only perform four arithmetic operations: addition (+), subtraction (-), multiplication (*), and division (/).";
        return 0;
    }
    if (c == '/' && y == 0) {
        cout << "You cannot divide by the number 0.";
        return 0;
    }
    cout << "Result: ";
    if (c == '+') cout << x + y;
    else if (c == '-') cout << x - y;
    else if (c == '*') cout << to_string(x * y);
    else cout << x / y;
    return 0;
}