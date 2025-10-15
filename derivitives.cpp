//
// Created by Brandon McKinley on 10/13/25.
//
//Power Rule : d/dx x^a = a*x^a-1
//Chain rule : d/dx x(ax) = a x(ax)
//Constant : d/dx C = C
// d/dx e^x = e^x
// d/dx sin x = cos x
// d/dx cos x = -sin x
// d/dx tan x = sec^2 x
// d/dx sec x = secx tanx
// d/dx csc x = -cscx cotx
// d/dx cot x = -csc x

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

// Function declarations
void determineOperation(int a, int b, char operation);
int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);
string trig_derive(string a);
int const_derive(int a);
string powerRule(int a, int x);
string productRule();
string quotientRule();

int main() {
    int a, b;
    char operation;

    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter an operation (+, -, *, /, d/dx): ";
    cin >> operation;

    determineOperation(a, b, operation);

    return 0;
}

void determineOperation(int a, int b, char operation) {
    if (operation == '+') {
        cout << "Result: " << addition(a, b) << endl;
    } else if (operation == '-') {
        cout << "Result: " << subtraction(a, b) << endl;
    } else if (operation == '*') {
        cout << "Result: " << multiplication(a, b) << endl;
    } else if (operation == '/') {
        if (b != 0) {
            cout << "Result: " << division(a, b) << endl;
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
        }

    }else if (operation == 'd/dx') {

    }else {
        cout << "Invalid operation." << endl;
    }
}

int addition(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    return a / b;
}

string trig_derive(string trig) {


};
