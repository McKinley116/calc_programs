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
//void breakdown(string equation, vector<string> words);
void determineOperation(int a, int b, char operation);
int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);
string trig_derive(const vector<string>, vector<string> );
int const_derive(int a);
string powerRule(int a, int x);
string productRule();
string quotientRule();

int main() {

    //int a, b;
    //char operation;
    string equation;

    //cout << "Enter two numbers: ";
    //cin >> a >> b;
    //cout << "Enter an operation (+, -, *, /, d/dx): ";
    //cin >> operation;
    //determineOperation(a, b, operation);

    cout << "Enter an equation:";
    cin.clear();
   getline(cin, equation);
    stringstream ss(equation);
    string word;
    vector<string> words;;
    vector <string> derivatives;

    while (ss >> word) {
        words.push_back(word);

    }

   // cout << "This is your equation:" << endl;


    return 0;
}

void determineOperation() {

}

string trig_derive(const vector<string>& words, vector<string>& derivatives ) {
    for (const auto& words : derivatives) {
        derivatives.push_back(words);

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

